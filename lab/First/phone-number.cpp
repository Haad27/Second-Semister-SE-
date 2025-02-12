#include <iostream>
using namespace std;
// declare enum
enum city
{
    Islamabad = 111,
    Lahore = 222,
    Karachi = 333,
    Faisalabad = 444

} s3;
// declaring struct
struct phone
{
    city area;
    int exchange, number;

} s1, s2;

int main()
{
    s2 = {Lahore, 111, 222};
    // declaring enum to use them
    // declare two variables for choice
    int cityname;
    int inputcity;
    bool check =true;
    // getting city
    
    // do while to check that answer is in range
    do
    {
    cout << "which is your city.\n1:Islamabad\n2:Lahore\n3:Karachi\n4:Faisalabad \n";
    cin >> inputcity;
    switch (inputcity)
    {
    case 1:
        s1.area = Islamabad;
            check = true;
        break;
    case 2:
        s1.area = Lahore;
            check = true;
        break;

    case 3:
        s1.area = Karachi;
            check = true;
        break;

    case 4:
        s1.area = Faisalabad;
        check = true;
        break;

    default:
        cout << "answer not in range of 1 to 4\n";
        check = false;
        break;
    }
    } while (check == false);
    
 

    // taking exchange and number
    cout << "enter the exchange ";
    cin >> s1.exchange;
    // cheecking that the value must be in range of 3
    if (s1.exchange > 999 || s1.exchange < 100)
    {
        cout << "exchange must be in range of 3";
        return 0;
    }

    cout << "enter the number ";
    cin >> s1.number;
    // cheecking that the value must be in range of 4
    if (s1.number > 9990 || s1.number < 1000)
    {
        cout << "number must be in range of 4";
        return 0;
    }

    // displaying the reault
    cout << "my number \n";
    cout <<"("<< s2.area <<")"<<s2.exchange <<"-"<< s2.number <<endl;
    cout << "your number\n" ;
    cout << "(" << s1.area << ")" << s1.exchange << "-" << s1.number;

    return 0;
}