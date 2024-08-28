#include <iostream>
using namespace std;
struct employee
{
    int ldapId{};
    string name{};
    int salary{};
};

int main()
{

    employee amit{};
    employee prachi{};
    employee dipali{};

    amit.ldapId = 30001;
    amit.name = "AMitGupta";
    amit.salary = 30000;

    cout << amit.ldapId << '\n';
    cout << amit.name << '\n';
    cout << amit.salary << '\n';

    prachi.ldapId = 30002;
    prachi.name = "PrachiPurohit";
    prachi.salary = 25000;

    cout << prachi.ldapId << '\n';
    cout << prachi.name << '\n';
    cout << prachi.salary << '\n';

    dipali.ldapId = 30003;
    dipali.name = "DipaliKadam";
    dipali.salary = 20000;

    cout << dipali.ldapId << '\n';
    cout << dipali.name << '\n';
    cout << dipali.salary << '\n';

    return 0;
}