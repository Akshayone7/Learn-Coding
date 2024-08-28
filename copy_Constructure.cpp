#include <iostream>
using namespace std;
class employ{
   public: int id{};
   public: int salary{};
   public: void print(){
    std::cout<<"Id of Employee:= "<<id<<'\n'<<"Salary of Employee: "<<salary<<'\n';
   }
       
   };
int main() {
employ emp {30005, 10000};
emp.print();

employ empcopy {emp};
empcopy.print();
    return 0;
}