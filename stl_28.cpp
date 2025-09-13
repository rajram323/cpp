std::iota | STL ALGORITHM C++

yt  - https://www.youtube.com/watch?v=_RXnkHGUI6I&list=PLk6CEY9XxSIBPZCfQiphw4221uSbp0Q75&index=8
git - https://github.com/cppnuts-yt/CppNuts/blob/master/C%2B%2B%20Programming/STL/STL%20Algorithms/9%20iota.cpp


// TOPIC: STL ALGORITHM std::iota

// NOTES:
// 0. Fills the range [first, last) with sequentially increasing values,
//    starting with value and repetitively evaluating ++value.

#include <algorithm>
#include <iostream>
#include <list>
#include <numeric>
#include <vector>
using namespace std;

int main()
{                     
    std::list<int> lst(10);
    std::iota(lst.begin(), lst.end(), -5);

    for(auto elm: lst) cout << elm << endl;
 
    std::vector<std::list<int>::iterator> Vec(lst.size());
    std::iota(Vec.begin(), Vec.end(), lst.begin());

    for(auto elm: Vec) cout << *elm << endl;
 
    return 0;
}
