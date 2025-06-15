// why is auto keyword in cpp?
// it is used for type deduction


#include<iostream>
#include<typeinfo>
using namespace std;


class base {};
int main() {

    auto x = 20;
    auto y = 20.5;
    auto b = base();

    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;
    cout << typeid(b).name() << endl;

    return 0;
}
