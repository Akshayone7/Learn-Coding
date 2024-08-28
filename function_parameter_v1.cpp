#include <iostream>
using namespace std;

int myFunction1(int a)
{
    return 10 + a;
}

int myfunction2(int a, int b)
{
    return a*b;
}

int main() {
cout<<myFunction1(22)<<'\n';

cout<<myfunction2(10, 15)<<'\n';
    return 0;
}