std::partial_sort | STL ALGORITHM C++
yt  - https://www.youtube.com/watch?v=duMcuzGBtFA&list=PLk6CEY9XxSIBPZCfQiphw4221uSbp0Q75&index=4
git - https://github.com/cppnuts-yt/CppNuts/blob/master/C%2B%2B%20Programming/STL/STL%20Algorithms/4%20stl%20partial_sort.cpp

// TOPIC: STL Algorithm partial_sort

// NOTES:
// 0. partial_sort rearranges elements such that the range [first, middle) contains the sorted elements.
// 1. The order of equal elements is not guaranted to be preserved.
// 2. The order of remaining elements is unspecified.

// Look for the overloads in cppreff site.

#include <algorithm>
#include <functional>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> Vec{1, 0, 7, 4, 2, 8, 6, 5, 9, 3};

    std::partial_sort(Vec.begin()+1, Vec.begin() + 4, Vec.end()-2, greater<int>());
    
    for (int val : Vec) {
        std::cout << val << " ";
    } 
    
    return 0;
}
