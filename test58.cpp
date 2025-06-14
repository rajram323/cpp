#include <iostream>

class Foo
{

    int _bar;

public:
    Foo() {}

    Foo(const Foo &obj)
    {
        _bar = obj._bar;
    }
    void setbar(int newbar) { _bar = newbar; }
};

int main()
{
    Foo f1;
    f1.setbar(10);

    Foo f2 = f1;
    return 0;
}
