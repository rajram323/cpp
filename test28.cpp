// What Is The Best Place To Use Enum In C++?
// use wnums when dealing with limited set of values.
// your function can take one value out of set of values.

#include <iostream>
using namespace std;
enum class color
{
    white,
    red,
    green,
    blue
};

void fun(color c)
{
    switch (c)
    {
    case color::white:
        cout << "white" << endl;
        break;

    case color::green:
        cout << "green" << endl;
        break;

    case color::blue:
        cout << "blue" << endl;
        break;

    default:
        cout << "hey i am default" << endl;
        break;
    }
}

int main()
{
    color c = color::red;
    fun(c);
    return 0;
}
