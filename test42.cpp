// Two Ways To Return Multiple Values From Functions In C++
// 1. using some struct/class and fill the values in that
// 2. use tuple in cpp11

#include <iostream>
using namespace std;

// first day

struct values
{
    int x;
    char y;
    string z;
};
values fun(bool flg)
{
    if (flg)
        return values(1, 'x', "rupesh");
    else
        return values(2, 'y', "hitesh");
}
int main()
{
    values v;
    v = fun(true);
    cout << v.x << " " << v.y << " " << v.z << endl;
    v = fun(false);
    cout << v.x << " " << v.y << " " << v.z << endl;
    return 0;
}
