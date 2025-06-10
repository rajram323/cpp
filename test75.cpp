// what is this pointer in cpp?
//  ans: 1. passed as a hidden parameter to non static member unary_function
//       2. is a const pointer which holds the address of current obj [TYPE*const this]
//       3. if member function is const then, this pointers type becomes [const TYPE* const this]

#include <iostream>
using namespace std;

class Base
{
    int _a;

public:
    void setValue(int a) { _a = a; }
    // void setValue(Base* const this, int a) { this->_a=a; }
    int getValue() const { return _a; }
    // int getValue(const Base* const this) const { return this->_a; }
};

int main()
{
    Base b;
    b.setValue(10);
    // setValue(&b, 10);
    b.getValue();
    // getValue(&b);
}
