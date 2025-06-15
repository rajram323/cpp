// Functor In C++

#include <iostream>
using namespace std;

class mul
{
    int _val;

public:
    mul() {}
    mul(int val) : _val{val} {}

    int operator()(int val)
    {
        return val * _val
    }
};

int main()
{
    mul mul12(12);
    cout << mul12(2) << endl;
    cout << mul12(3) << endl;

    return 0;
}
