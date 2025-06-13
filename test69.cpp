#include <iostream>
using namespace std;

class Rectangle
{
    int width, height;

public:
    void Rectangle::set_values(int x, int y)
    {
        width = x;
        height = y;
    }

    int area() { return width * height; }
};

int main()
{
    int i = 0;
}
