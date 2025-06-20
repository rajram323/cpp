// what is diamond problem in cpp?
// ans:

#include <iostream>
using namespace std;

class A
{
public:
    int _a
};

class B : public A
{
public:
    int _b;
};
class C : public A
{
public:
    int _c;
};

class D : public B, public C
{
public:
    int _d;
};
int main()
{

    D d;
    d._a = 10; // error

    d._a = 11;
    d._b = 12;
    d._c = 13;

    return 0;
}

//     A
//    / \
//    B  C
//     \/
//     D

// A oblect memory layout
//  _a

//  B oblect memory layout
//  _a
//  _b

//  C oblect memory layout
//  _a
//  _c

// D oblect memory layout
//  _a
//  _b
//  _a
//  _c
//  _d
