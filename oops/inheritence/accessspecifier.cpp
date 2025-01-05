#include <iostream>
#include <string>
#include <vector>

using namespace std;
class employee{
    protected:
    int salary;
};
class emp : protected employee{
    public:
    void setsLey(int x){
        salary = x;
    }

    int getsalary(){
        return salary;
    }

};
int main() {
  emp obj;
  obj.setsLey(10000);
  cout << obj.getsalary();

  
    return 0;
}
