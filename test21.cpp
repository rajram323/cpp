#include <iostream>
using namespace std;

void func() { cout << "inside base" << endl; }

class base
{
public:
    base() { func(); }
};

base b;

int main()
{
    cout << "inside main" << endl;
    return 0;
}
