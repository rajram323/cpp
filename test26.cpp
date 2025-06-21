#include <iostream>
using namespace std;

// function example
template <typename T>
void print(const T x)
{

    static int var = 10;
    cout << ++var << endl;
}

// void print(const T int, float, double, char x){

//     static int var = 10;
//     cout << ++var << endl;
// }

int main()
{
    print(1);
    print(2);
    print('x');
    print(1.5);
    return 0;
}

// class example

#include <iostream>
using namespace std;

template <typename T>
class print
{
private:
    int x;

public:
    static T var;
    void printval() { cout << ++var << endl; }
};

template <class T>
T print<T>::var = 0;

int main()
{
    print<int> p;
    p.printval();

    print<float> f;
    f.printval();

    return 0;
}
