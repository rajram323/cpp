// How To Stop Someone From Copying Your Objects?

// 1.keep copy constructor and assignment operator as private in your class
// 2.inherit dummy class with private copy constructor and assignment operator
// 3.delete copy constructor and assignment operator from your class

#include <ipstream>
using namespace std;

// first way
class base
{
    int _x;

public:
    base() {}
    base(int x) : _x{x} {}

private:
    base(const base &obj) : _x{obj._x} {}
    base &operator=(const base &rhs)
    {
        _x = rhs._x;
        return *this;
    }
};

int main()
{

    base b1(10);
    base b2(20);
    b1 = b2; // error
    return 0;
}

// second way
class stopcopy
{
public:
    stopcopy() {}

private:
    stopcopy(const stopcopy &obj) {}
    stopcopy &operator=(const stopcopy &rhs) {}
};

class base : public stopcopy
{
    int _x;

public:
    base() : _x{0} {}
    base(int x) : _x{x} {}
};

int main()
{
    base b1(10);
    base b2 = b1;
}

// third way

class base
{
    int _x;

public:
    base() {}
    base(int x) : _x{x} {}
    base(const base &obj) = delete;
    base &operator=(const base &rhs) = delete;
};

int main()
{
    base b1(10);
    base b2 = b1; // error
}
