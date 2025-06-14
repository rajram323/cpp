#include <iostream>

class Base
{

public:
    int b_var;
    Base() { std::cout << "Base constructor" << std::endl; }
    ~Base() { std::cout << "Base destructor" << std::endl; }
};

class Derived : public Base
{
public:
    int d_var;
    Derived() { std::cout << "derived constructor" << std::endl; }
    ~Derived() { std::cout << "Base fun" << std::endl; }
};

int main()
{
    Derived d_obj;
    Base b_obj = d_obj;
    return 1;
}

// Derived
// int d_var;
// int b_var;

// Base
//  b_var
