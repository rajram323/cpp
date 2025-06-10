#include <iostream>
using namespace std;

void func(int *ptr)
{
    cout << *ptr << endl;
    delete ptr;
}

int main()
{
    int *p1 = new int(10);
    int *p2 = p1;
    func(p2);

    cout << *p1 << endl;

    return 0;
}
