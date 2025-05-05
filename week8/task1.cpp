#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int vectorSize;
void display (vector<int> v){
    for (int i = 0; i <vectorSize; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}

int main() {
  
vector <int> vec ;
int x;
int element  ;
cout <<"emter the size of vector ";
cin >> vectorSize;
for (int i = 0; i < vectorSize; i++)
{
    cout<<"enter the element to add in vector ";
    cin>>element;
    vec.push_back(element);
}
 
display(vec);

cout <<"enter the element to add in vector in the end\n";
cin >> x;
vectorSize++;
vec.push_back(x);

display(vec);
cout <<"remove the last element\n";
vectorSize--;
vec.pop_back();

display(vec);
int sum=0;
for (int i = 0; i <vectorSize; i++)
    {
        sum = sum + vec[i];
    }
  
    cout <<"\n\nthe sum is == " << sum <<endl;
}