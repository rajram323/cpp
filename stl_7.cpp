yt - https://www.youtube.com/watch?v=xxA2QjKj73w&list=PLk6CEY9XxSIA-xo3HRYC3M0Aitzdut7AA&index=7
git - https://github.com/cppnuts-yt/CppNuts/blob/master/C%2B%2B%20Programming/STL/Associative%20Containers/6%20std%20multiset%20in%20c%2B%2B.cpp
// TOPIC: std::multiset<T>

// SYNTAX: std::multiset<T> obectName;

// 1. std::multiset is an Associative Container that contains a sorted set of duplicate objects of type Key.
// 2. It is usually implemented using Red-Black Tree.
// 3. Insertion, Removal, Search have logirathmic complexity.
// 4. If we want to store user defined data type in multiset then we will have to provide 
//    compare function so that multiset can store them in sorted order.
// 5. We can pass the order of sorting while constructing set object.

// BOTTOM LINE:
// multiset is similar to set except it can have multiple elements with same vlaue.

#include <iostream>
#include <set>
#include <string>
#include <functional>
using namespace std;

// Example

// int main() {
//     std::multiset<int, std::greater<int>> multiSet = {5,2,4,3,2,5};
//     multiSet.insert(20);
//     for(const auto& e: multiSet) {
//         cout << e << endl;
//     }
// }

//Example : User Defined
class Person{
    public:
        float age;
        string name;
    bool operator < (const Person& rhs) const { return age<rhs.age; }
    bool operator > (const Person& rhs) const { return age>rhs.age; }
};

int main() {
	std::multiset<Person,std::greater<>> multiSet = {{25,"Rupesh"}, {20,"Hitesh"}};

    for(const auto& e: multiSet){
        cout << e.age << " " << e.name << endl;
    }
    return 0;
}
