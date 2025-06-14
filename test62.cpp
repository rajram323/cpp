#include <iostream>
using namespace std;

class Int
{
    int elem;

public:
    Int() {}
    Int(int val) : elem{val} {}
    void printval() { cout << elem << endl; }

    Int &operator++()
    { // pre increment

        elem++;
        return *this;
    }

    Int operator++()
    { // pre increment
        Int tmp = *this;
        ++(*this);
        return tmp;
    }
};

int main()
{

    Int i(100);
    (++i).printval();
    (i++).printval();
    i.printval();

    return 0;
}
