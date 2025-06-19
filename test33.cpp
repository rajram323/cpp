#include <iostream>
using namespace std;

class base
{
public:
    int _b_var;
    virtual void fun() { cout << "base fun" << endl };
};

class derived : public base
{
public:
    int _d_var;
    void fun() { cout << "derived fun" << endl; }
};

void myfun(base *obj)
{
    obj->fun();
}

int main()
{
    myfun(new base);
    myfun(new derived);
    return 0;
}
