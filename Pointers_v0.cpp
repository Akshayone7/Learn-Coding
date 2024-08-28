
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a;
    int *p;
    
    p = &a;
    cout<<"Enter Value";
    cin>>a;
    cout<<*p<<'\n';

    return 0;
}