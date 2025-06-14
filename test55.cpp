#include <iostream>
using namespace std;

class Base
{

    // int _bar;
};

int main()
{
    Base b1, b2;
    std::cout << sizeof(Base) << std::endl;

    if (&b1 == &b2)
    {
        std::cout << "yes" << std::endl;
    }
    else
    {
        std::cout << "no" << std::endl;
    }
    return 0;
}
