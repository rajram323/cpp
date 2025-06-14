// what are the drawbacks of vector cpp?
// ans 1: it over allocate memory, which some time could be vary bad in terms of performance
// ans 2: when ever capacity of vector increase it copy all element from previous vector to new vector

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    cout << "size :" << vec.size() << endl;
    cout << "capacity :" << vec.capacity() << endl;

    vec.push_back(1);
    cout << "size :" << vec.size() << endl;
    cout << "capacity :" << vec.capacity() << endl;

    vec.push_back(1);
    cout << "size :" << vec.size() << endl;
    cout << "capacity :" << vec.capacity() << endl;

    vec.push_back(1);
    cout << "size :" << vec.size() << endl;
    cout << "capacity :" << vec.capacity() << endl;

    vec.push_back(1);
    cout << "size :" << vec.size() << endl;
    cout << "capacity :" << vec.capacity() << endl;

    vec.push_back(1);
    cout << "size :" << vec.size() << endl;
    cout << "capacity :" << vec.capacity() << endl;

    return 0;
}
