// how to print something N number of times without using loop or recurssion?
// using constructor and array

#include <iostream>
using namespace std;

class Base
{

public:
    Base() { cout << "Bingo!!" << endl; }
};

int main()
{
    Base b[10];
    return 0;
}
