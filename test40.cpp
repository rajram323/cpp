// Why We Must Return Reference In Copy Assignment Operator?
// why we should return reference from copy assignment operator in cpp?
// to support chaining assignment. but there is a point.....

#include <iostream>
using namespace std;

class base
{
    int _var;

public:
    int a = 10, b, c = 2;
    (b = c) = a;
    cout << "B: " << b << endl;
    cout << "C: " << c << endl;

    base() {}
    base(int val) : _var{val} {}
    base &operator=(const base &rhs)
    // base operator=(const base &rhs)
    {
        _var = rhs._var;
        return *this;
    }
    void print()
    {
        cout << _var << endl;
    }
};

int main()
{
    base b1(10);
    base b2, b3, b4;

    b2 = b3 = b4 = b1;

    // (b2 = b3) = b1;

    b1.print();
    b2.print();
    b3.print();
    b4.print();
    return 0;
}
