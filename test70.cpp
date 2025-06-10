#include <iostream>
using namespace std;

class Rectangle
{
private:
    int _width, _height;

public:
    int area() { return _width * _height };
    int getWidth() { return _width; }
    int getHeight() { return _height; }
    void setHeight(int height)
    {

        if (height != 0 && height > 0)
        {
            _height = height;
        }
    }

    void setWidth(int width)
    {

        if (width != 0 && width > 0)
        {
            _width = width;
        }
    }
};

int main()
{
    Rectangle obj;
    obj.setWidth(2);
    obj.setHeight(3);

    cout << obj.area() << endl;
    return 0;
}
