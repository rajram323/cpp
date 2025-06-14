// How To Check Two Objects Belongs To Same Class In C++?
// by using typeid
#include <iostream>
#include <typeinfo>
using namespace std;

class A
{
};

class B
{
};

int main()
{
    A a1, a2;
    B b1, b2;

    if (typeid(a1) == typeid(b1))
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }

    if (typeid(a1) == typeid(a2))
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }

    if (&a1 == &a2)
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }

    return 0;
}
