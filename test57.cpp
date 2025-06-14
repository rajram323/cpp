#include <iostream>
using namespace;

int main()
{
    Foo 01, 02;

    o1.setnormal(10);
    o2.setnormal(5);
    // o1 >>> own memory for normalvaribale;
    // o2 >>> own memory for normalvaribale;
    //  but o1 nad o2 will have common memory for static variable
    std::cout << o1.getnormal() << std::endl;
    std::cout << o2.getnormal() << std::endl;

    o1.setstatic(60);
    std::cout << o2.getstatic() << std::endl;

    Foo::setstatic(60);
    std::cout << o2.getstatic() << std::endl;

    return 0;
}
