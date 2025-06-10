#include <iostream>
using namespace std;

struct A
{
    int x;
    double y;
};

struct B
{
    int y;
    A a;

    // int y;
    // int z;
    // A a;

    // int y;
    // A a;
    // int z;
};

int main()
{
    cout << sizeof(B) << endl;
    return 0;
}
