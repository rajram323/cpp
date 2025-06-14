#include <iostream>
using namespace std;

class Base
{
    int _basevar;

public:
    Base() { std::cout << "Base constructor" << std::endl; }
    ~Base() { std::cout << "Base constructor" << std::endl; }
};

int main()
{
    Base();
    std::cout << "something" << std::endl;

    Base obj;
    obj.~Base();

    Base().~Base();
}
