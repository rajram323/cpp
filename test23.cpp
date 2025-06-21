// Why Returning Reference Is Bad Some Time In C++?

#include <iostream>
using namespace std;

int &fun(int &i)
{
    i = i + 15;
    return i;
}
int main()
{

    int i = 10;
    int &a = fun(i);
    cout << a << endl;
    return 0;
}
