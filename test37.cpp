// how cpp achieve function overloading?
// name mangling..

#include <iostream>
using namespace std;

void print(int val) { cout << val << endl; }
void print(double val) { cout << val << endl; }

int main()
{
    print(10);
    print(10.1);
    return 0;
}
