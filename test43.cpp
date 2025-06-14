// what is rvo and nrvo in cpp?
// it stands for return value optimization and named return value optimization?
// g++ -fno-elide-constructors app.cpp

#include <iostream>
#include <vector>
using namespace std;

class base
{
public:
    base()
    {
        cout << "constructor of base" << endl;
    }
    base(const base &)
    {
        cout << "copy-constructor of base" << endl;
    }
};

base func()
{
    return base();
}
int main()
{
    base b = func();
    return 0;
}
