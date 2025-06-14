// Virtual Destructor In C++
#include <iostream>

class Base
{

public:
    virtual void fun() { std::cout << "Base fun" << std::endl; }
    Base() { std::cout << "Base constructor" << std::endl; }
    ~Base() { std::cout << "Base destructor" << std::endl; }
};

class Derived : public Base
{
public:
    virtual void fun() { std::cout << "derived fun" << std::endl; }
    Derived() { std::cout << "derived constructor" << std::endl; }
    ~Derived() { std::cout << "Base fun" << std::endl; }
};

int main()
{
    Base *b1 = new Base();
    Base *b2 = new Derived();

    b1->fun();
    b2->fun();

    delete b1;
    delete b2;

    return 1;
}
