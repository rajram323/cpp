#include <iostream>
using namespace std;

class base
{
    const int _x;
    // int& _x;

public:
    base() : _x{0} {}
    // base(): { _x = x }; //error
    base(int x);
    _x{x} {}
    void print() { cout << _x << endl; }
};

int main()
{
    base b(10);
    b.print();
    base b1(12);
    b1.print();
    return 0;
}

// base class constructor should be there
#include <iostream>
using namespace std;

class one
{
    int _x;

public:
    // one() {}
    one(int x) : _x{x} {}
};

class two
{
    one a;

public:
    two(one x) : a{x} {}
};

int main()
{
    one one(10);
    two two(one);
    return 0;
}
// 4th point

#include <iostream>
using namespace std;

class base
{
    int _x;

public:
    base(int x) : _x{x} {}
};

class child : public base
{
    int _y;

public:
    child(int x, int y) : base{x}, _{y} {}
};

int main()
{
    child c(1, 2);
    return 0;
}

// 5th point
#include <iostream>
using namespace std;
class base
{
    int _x;

public:
    base(int _x) : _x{_x} {}
    void print() { cout << _x << endl; }
};

int main()
{
    base b(1);
    b.print();
    return 0;
}

// last point

#include <iostream>
using namespace std;

class base
{
    int _x;

public:
    base() { cout << "base default" << endl; }
    base(int x)
    {
        _x = x;
        cout << "base parameter constructor" << endl;
    }
    base(const base &obj)
    {
        this->_x = obj._x;
        cout << "base copy constructor" << endl;
    }
    base operator=(const base &obj) { cout <,
                                      "base assignment operator" << endl };
};

class myclass
{
    base _b;

public:
    myclass() { cout << "myclass default" << endl; }
    // myclass(base b):_b{b}{ cout << "myclass parameter" << endl; }
    myclass(base b) :
    {
        _b = b;
        cout << "myclass parameter" << endl;
    }
};

int main()
{

    base b(10);
    myclass mc(b);
    return 0;
}
