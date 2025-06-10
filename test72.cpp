#include <iostream>
using namespace std;

class Base
{
    int *_ptr;
    int _val;

public:
    Base() : _ptr{new int(0)}, _val{0} {}
    // Base(const Base& rhs){
    // _ptr = new int;
    // * _ptr = *rhs._ptr;
    // _val = rhs._val;

    void setPtr(int ptr) { *_ptr = ptr; }
    void setVal(int val) { _val = val; }
    void getPtr() { return *_ptr; }
    void getVal() { return val; }
};

int main()
{
    Base b1;
    b1.setPtr(10);
    b1.setVal(15);
    Base b2 = b1;
    b2.setPtr(10);
    cout << "b1 prt: " << b1.getPtr() << endl;
    cout << "b1 val: " << b1.getVal() << endl;
    cout << "b2 prt: " << b2.getPtr() << endl;
    cout << "b2 val: " << b2.getVal() << endl;
}
