// what is one of the use of decltype in cpp?
// it checks the type of expression..

#include <iostream>
using namespace std;

template <typename T1, typename T2>
T2 add(T1 a, T2 b)
// auto add(T1 a, T2 b) -> decltype(a+b){
{
    return a + b;
}

int main()
{
    cout << add(1, 1.8) << endl;
    cout << add(1, 1.8) << endl;
    return 0;
}
