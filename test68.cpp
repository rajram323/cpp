// what is abstraction in cpp?
// it is an object oriented programming concept that talks about show only necessary things.
// hiding the implementation part

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width, height;

public:
    void set_values(int x, int y)
    {
        width = x;
        height = y;
    }
    int area() { return width * height; }
    int getWidth() { return width; }
    int getHeight() { return height; }
};

// class Rocket{
//     void fly() { ......... }
// };

int main()
{
    Rectangle obj;
}
