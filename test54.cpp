// What Is The Difference Between struct And class In C++?
#include <iostream>

class classbase
{
    int _bar;
};

struct structbase
{
    int _bar;
};

int main()
{
    classbase cb;
    structbase sb;

    // cb._bar = 10;   compiler error as class members are by default private
    sb._bar = 10; /* compiler error as struct members are by default public*/
}
