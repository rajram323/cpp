yt - https://www.youtube.com/watch?v=nPSDR5nZzHA&list=PLk6CEY9XxSIA-xo3HRYC3M0Aitzdut7AA&index=8
      more in video
git - https://github.com/cppnuts-yt/CppNuts/blob/master/C%2B%2B%20Programming/STL/Associative%20Containers/8%20map%20in%20c%2B%2B%20stl.cpp
// TOPIC: Map In C++

// NOTES:
// 1. Syntax: map<T1, T2> obj;  // where T1 is key type and T2 is value type.
// 2. std::map is associative container that store elements in key value combination
//    where key should be unique, otherwise it overrides the previous value.
// 3. It is implement using Self-Balance Binary Search Tree (AVL/Red Black Tree) .
// 4. It store key value pair in sorted order on the basis of key (assending/decending).
// 5. std::map is generally used in Dictionay type problems.

// EXAMPLE: Dictionary

#include <iostream>
#include <map>
#include <functional>
#include <vector>
using namespace std;

class Person{
    public:
        float age;
        string name;
    bool operator < (const Person& rhs) const { return age<rhs.age; }
    bool operator > (const Person& rhs) const { return age>rhs.age; }
};

int main() {
    std::map<Person, int, std::less<>> Map;
    Person p1, p2;
    Map[p1] = 1;
    Map[p2] = 2;

    cout << Map[p1] << endl;
    cout << Map[p2] << endl;
    return 0;
} 
