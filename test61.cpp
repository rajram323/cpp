#include <iostream>
using namespace std;

// foo.h
#ifndef foo_h
#define foo_h

#include <iostream>

template <typename T>
class Foo
{
    T _val;

public:
    T getval();
    void setval(T val);
};
#endif

// two method two resolve
// add foo.cpp code here or
// #include "foo.cpp"
// foo.cpp
#include "foo.h"

template <typename T>
T Foo<T>::getval()
{
    return _val;
}

template <typename T>
void Foo<T>::setval(T val)
{
    _val = val;
}

// instantiate here
// template class Foo<int>
// template class Foo<float>
// app.cpp
#include "foo.h"
using namespace std;

int main()
{
    Foo<int> obj;
    obj.setval(5);
    cot << endl
        << obj.getval() << endl;
    return 0;
}
