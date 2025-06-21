// What Is Constructor Delegation In C++?

#include <iostream>
using namespace std;

class base
{
    int _x, _y;

public:
    base() : base(0, 0) {}
    base(int a) : base(a, 0) {}

    base(int a, int b) : _x{a}, _y{b}
    {
        // .
        // .
        // .
        // .
        // .
        // .
        _x = som1;
        _y = som2;
    }
    void print() { cout << _x " " << _y << endl; }
};

int main()
{
    base b1;
    base b2(10);
    base b3(10, 20);

    b1.print();
    b2.print();
    b3.print();
    return 0;
}
