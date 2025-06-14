// what is explicit constructor in cpp?
// what i sthe useof explicit keyword in cpp?

// ans: it avoids implicit call to the constructor

#include <iostream>
class Base
{
    int b_var;
    explicit Base(int var) : b_var(var) {}
    void print() { std::cout << b_var << std::endl; }
};

void fun(Base b)
{
    b.print();
}

int main()
{
    Base obj1(10);  // normal call to constructor
    Base obj2 = 20; // implicit cal to constructor

    fun(obj1);
    fun(30);
    return 0;
}
