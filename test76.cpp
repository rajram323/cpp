// function hiding
#include <iostream>
using namespace std;

class Base
{
public:
    void fun() { cout << "voooid" << endl; }

    // int fun(int i, int j){
    int fun(int i)
    {
        cout << "base" << endl;
    }
};

class Derived : public Base
{
public:
    using Base::fun;

    void fun(char c)
    {
        cout << "derived" << endl;
    }
};

int main()
{
    Derived d;
    d.fun(1);
    d.fun('a');
    // d.Base::fun();
    // d.fun(1,2);

    return 0;
}
