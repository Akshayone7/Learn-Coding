#include <iostream>
using namespace std;
class employ{
   public: int id{1};
   public: int salary{2000};
   public: void printa(){
    std::cout<<"Id of Employee:= "<<id<<'\n'<<"Salary of Employee: "<<salary<<'\n';
   }
       
   };
int main() {
employ emp {30005, 10000};
emp.printa();
    return 0;
}