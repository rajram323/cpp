// Code Bloating In C++
// code bloat is the production of code that is perceived as unnecessarily long or otherwise wasteful of resources

#include <iostream>
using namespace std;

int main()
{

    string str("rupesh yadav");
    cout << str << endl;
    // cout << "rupesh yadav" << endl;

    string www("www");
    string google("google");
    string com("com");
    string address = www + google + com;
    // cout << "www.google.com" << endl;

    base b1;
    b1.print();
    return 0;
}

class base
{
    int _x;

public:
    inline void print()
    {
        cout << "hey i am going to print _x" << endl;
        cout << _x << endl;
    }
};
