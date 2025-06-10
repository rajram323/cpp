// what is data encapsulation in cpp?
// it is an object oriented programming concept that binds data with function( which manipulate the data)
#include <iostream>
using namespace std;

class Rectangle
{
    int width, height;

public:
    void set_values(int x, int y)
    {
        width = x;
        height = y;
    }
    int area() { return width * height; }
};

int main()
{
    Rectangle obj;
    return 0;
}
