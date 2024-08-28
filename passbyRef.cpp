// Example program
#include <iostream>
#include <string>
using namespace std;

int fun1()
{
    int a,b;
    cout<<"Enter two int";
    cin>> a>>b;
    int ad = a+b;
    return ad;
   
}

void fun2(int ad)
{
    cout<<"The adition of a and b is =: "<< ad; 
}

int main()
{
     fun2 (fun1());
    return 0;
}
