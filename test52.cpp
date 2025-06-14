#include <iostream>

class Base
{
    int a;

public:
    Base() { std::cout << "Constructor" << std::endl; }
    ~Base() { std::cout << "Destructor" << std::endl; }
};

int main()
{
    // normal case
    std::cout << "normal new case" << std::endl;
    Base *obj = new Base();
    delete obj;

    // placement new case
    std::cout << "placement new case:" << std::endl;
    char *memory = new char[10 * sizeof(Base)];

    Base *obj1 = new (&memory[0]) Base();
    Base *obj2 = new (&memory[0]) Base();
    Base *obj3 = new (&memory[0]) Base();

    obj1->~Base();
    obj2->~Base();
    obj3->~Base();

    delete[] memory;
    return 1;
}
