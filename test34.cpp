#include <iostream>
using namespace std;

class base
{
    int var;

public:
    base() {}
    base(int val) : var{val} {}
    operator int() const
    {
        return var;
    }
};

int main()
{
    base b(4556498);
    int tmp = b;
    cout << tmp << endl;
    return 0;
}
