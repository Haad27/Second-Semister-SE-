#include <iostream>
using namespace std;

class Book{ 
    protected: 
        string title; 
        float rating; 
    public: 
        Book (string s, float r){ 
            title =  s; 
            rating = r; 
        } 
        virtual void display(){} 
}; 
class AudioBook: public Book 
{ 
    float AudioLength; 
    public: 
        AudioBook (string s, float r, float vl): Book (s, r){ 
            AudioLength = vl; 
        } 
        void display(){ 
            cout<<"This is an amazing audio with title "<<title<<endl; 
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl; 
            cout<<"Length of this audio is: "<< AudioLength <<" minutes"<<endl; 
        } 
};     
class TextBook: public Book 
{ 
    int words; 
    public: 
        TextBook (string s, float r, int wc): Book(s, r){ 
            words = wc; 
        } 
     void display(){ 
      cout<<"This is an amazing textbook with title "<<title<<endl; 
      cout<<"Ratings of this textbook: "<<rating<<" out of 5 stars"<<endl; 
      cout<<"No of words in this textbook is: "<<words<<" words"<<endl; 
         } 
};
int main(){ 
    string title; 
    float rating, alen; 
    int words; 
 
    // For Auido Book 
    title = "OOP tutorial"; 
    alen = 4.56; 
    rating = 4.89; 
    AudioBook OOPaudio(title, rating, alen); 
 
    //  For Text Book 
    title = "OOP tutorial Text"; 
    words = 433; 
    rating = 4.19; 
    TextBook OOPText(title, rating, words); 
 
    Book* tuts[2]; 
    tuts[0] = & OOPaudio; 
    tuts[1] = &OOPText; 
 
    tuts[0]->display(); 
    tuts[1]->display(); 
 
    return 0; 
} 