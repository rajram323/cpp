std::is_sort | STL ALGORITHM C++

yt  - https://www.youtube.com/watch?v=fxyfXCegC-E&list=PLk6CEY9XxSIBPZCfQiphw4221uSbp0Q75&index=3
git - https://github.com/cppnuts-yt/CppNuts/blob/master/C%2B%2B%20Programming/STL/STL%20Algorithms/3%20stl%20is_sort.cpp


// TOPIC: STL Algorithm is_sort

// NOTES:
// 0. Checks if the elements in range [first, last) are sorted in non-descending order.

// TYPES:
// 1. Can check integral data types
// 2. Can check user defined data types
// 3. Can check using a function object
// 4. Can check using lambda expression

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> Vec{5, 4, 6, 7, 3, 2, 8, 9, 1};

    sort(Vec.begin(), Vec.end(), greater<int>());

    for (auto elm : Vec) {
        cout << elm << " ";
    }

    cout << endl << is_sorted(Vec.begin(), Vec.end(), greater<int>());
    return 0;
}
