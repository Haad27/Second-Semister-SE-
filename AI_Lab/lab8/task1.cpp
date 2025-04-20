#include <iostream>
#include <fstream>
#include <ctime>
#include <chrono>
#include <thread>
#include <sstream>
using namespace std;

class main
{
protected:
    int choice;
    int correct, wrong;

    string corrected[100];
    string wronged[100];
    bool keepRunning = true;
    int x[100] = {};
    string words[10000];
};

class text : protected main
{
protected:
    void getCurrentText()
    {
        srand(time(0));
        ifstream myfile;
        myfile.open("all-english-words.txt");
        string line;
        if (myfile.is_open())
        {
            int i = 0;
            while (myfile >> line)
            {
                words[i] = line;
                i++;
            }
            myfile.close();
            for (int i = 0; i < 100; i++)
            {
                x[i] = rand() % 10000;
                cout << words[x[i]] << " ";
            }
        }
    }
};

class time : protected text
{
protected:
    void startTest()
    {
        int limit = (choice == 1) ? 15 : (choice == 2) ? 30 : 60;

        for (int i = 0; i <= limit; i++)
        {
            // Save current cursor position
            cout << "\033[s";

            // Move cursor to top-right (line 1, column 70)
            cout << "\033[9;80H"; // You can adjust column (e.g., 60, 80 based on screen)

            cout << "Time: " << i << "s   " << flush;

            // Restore cursor back to original position
            cout << "\033[u";

            this_thread::sleep_for(chrono::seconds(1));
        }

        keepRunning = false;
    }
};

class accuracy_checker : protected time
{
protected:
    void checkInput(string input, int y)
    {
        if (input == words[x[y]])
        {
            correct++;
            corrected[y] = input;
        }
        else
        {
            wrong++;
            wronged[y] = input;
        }
    }

    void input()
    {
        int y = 0;
        string line;
        while (keepRunning)
        {
            cout << "\nType here: ";
            getline(cin >> ws, line);

            string word;
            istringstream iss(line);
            while (iss >> word && y < 100 && keepRunning)
            {
                checkInput(word, y);
                cout << "(You typed: " << word << ")" << endl;
                y++;
            }
        }

        if (!keepRunning && !line.empty())
        {
            string word;
            istringstream iss(line);
            while (iss >> word && y < 100)
            {
                checkInput(word, y);
                cout << "(You typed: " << word << ")" << endl;
                y++;
            }
        }
    }
};

class child : public accuracy_checker
{
public:
    using accuracy_checker::correct;
    using accuracy_checker::wrong;

    void resetTest()
    {
        keepRunning = true;
        correct = 0;
        wrong = 0;
        for (int i = 0; i < 100; i++)
        {
            corrected[i] = "";
            wronged[i] = "";
        }
    }

    void getCurrentText()
    {
        resetTest();
        text::getCurrentText();
        cout << "\n\nDo you want to play for:\n1: 15 sec\n2: 30 sec\n3: 60 sec" << endl;
        cin >> choice;

        // Add some vertical spacing to push typing area down
        cout << string(5, '\n');

        thread t2([this]()
                  { this->startTest(); });
        thread t3([this]()
                  { this->input(); });

        t2.join();
        t3.join();

        cout << "Correct words: " << correct << endl;
        cout << "Wrong words: " << wrong << endl;

        cout << "You typed correct:\n";
        for (int i = 0; i < 100; i++)
        {
            if (!corrected[i].empty())
            {
                cout << corrected[i] << endl;
            }
        }

        cout << "You typed wrong:\n";
        for (int i = 0; i < 100; i++)
        {
            if (!wronged[i].empty())
            {
                cout << wronged[i] << endl;
            }
        }
    }
};

int main()
{
    child test;
    cout << "Welcome to the Typing Test!" << endl;
    test.getCurrentText();
    return 0;
}
