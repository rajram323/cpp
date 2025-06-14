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

//

#include <iostream>
#include <string>
#include <tuple>
using namespace std;

// second example
std::tuple<int, char, std::string> fun(bool flg)
{
    if (flg)
        return make_tiple(1, 'x', "rupesh");
    else
        return make_tiple(1, 'x', "rupesh");
}

int main()
{
    int num;
    char code;
    string name;

    tie(num, code, name) = fun(true);
    cout << num << " " << code << " " << name << endl;
    tie(num, code, name) = fun(false);
    cout << num << " " << code << " " << name << endl;
    return 0;

    //
    int num;
    char code;
    string name;
    auto v = fun(true);
    num = std::get<0>(v);
    code = std::get<1>(v);
    name = std::get<2>(v);
    cout << num << " " << code << " " << name << endl;
}
