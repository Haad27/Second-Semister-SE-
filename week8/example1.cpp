#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void display (vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}

int main() {
  
vector <int> vec ;
int x;
int element , size ;
cout <<"emter the size of vector ";
cin >> size;
for (int i = 0; i < size; i++)
{
    cout<<"enter the element to add in vector ";
    cin>>element;
    vec.push_back(element);
}
cout <<"element number you want to remove from the vector";
cin >> x;
vec.erase(vec.begin() + x-1);


display(vec);


cout <<"emter the vector number you want to add";
cin >> x;

vec.push_back(x);

display(vec);
cout <<"after sorting\n";
sort(vec.begin(), vec.end());
display(vec);

cout <<"after reversing it \n";
reverse(vec.begin(), vec.end());
display(vec);

vec.at(0) = 100;
display(vec);
    return 0;
}
