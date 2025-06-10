#include <iostream>
using namespace std;

class A
{
public:
    int i;
    static int j;
};

class B
{
public:
    int i;
    static int j;
};

int A::j = 10;

int main()
{
    cout << (sizeof(A) == sizeof(B)) << endl;
    cout << A::j << endl;
    return 0;
}
