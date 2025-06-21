// What Is The Order Of Function Parameter Evaluation In C++?
#include <iostream>
using namespace std;

bool build()
{
    cout << "build here now you can see!!" << endl;
    return true;
}

bool use()
{
    cout << "i am going to use what is already build" << endl;
    return true;
}

bool somefun2(int a, int b)
{
    cout << a + b << endl;
}

bool somefun1(int a)
{
    cout << a << endl;
}

int main()
{
    somefun1(build() + use());
    cout << "***************************" << endl;
    somefun2(build(), use());
    return 0;
}
