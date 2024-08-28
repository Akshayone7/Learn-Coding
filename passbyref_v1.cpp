#include <iostream>
using namespace std;

int multiply (int &a, int &b)
{
cout<< a*b;
}

int main() {
    int j = 10;
    int k = 10;
    multiply(j, k);

    return 0;
}