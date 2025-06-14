// what is override keyword in cpp?
// ans 1 : testing become easy with this..(easy maintenance)
// ans 2 : compile time check can be performed..(future error could be reduced)

#include <iostream>
using namespace std;

class base
{
    int b_var;

public:
    virtual void fun() { cout << "base fun" << endl; }
};

class derived : public base
{
    int d_var;

public:
    void fun(int a) override { cout << "derived fun" << endl; }
};

int main()
{
    base *b = new derived();
    b->fun();
    return 0;
}
