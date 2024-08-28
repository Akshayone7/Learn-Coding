using namespace std;
#include <iostream>


void printdigit(int x)
{
    switch(x)
    {
    case 1:
        cout<<"In CASE 1";
        break;
    case 2:
        cout<<"In Case 2";
        break;
    case 3:
        cout<<"In case 3 ";
        break;
    default :
        cout<<"Unknown";
    }
}
int main()
{
    int x;
cout<<"Enter value from below: ";
cout<<"\n 1 for CASE 1"<<"\n2 for CASE 2"<<"\n 3 for CASE 3"<<'\n';
cin>>x;
printdigit(x);
return 0;
}