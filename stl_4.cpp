yt - https://www.youtube.com/watch?v=loBmNtiTXd0&list=PLk6CEY9XxSIA-xo3HRYC3M0Aitzdut7AA&index=4 
// TOPIC: Best way to use vector in C++

// PROBLEM IN VECTOR ?

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> Vec;
    Vec.reserve(31);
    for(int i=0; i<32; ++i) { 
        Vec.push_back(i);
        cout << "Size:" << Vec.size() << "   Capacity:" << Vec.capacity() << endl;
    }
    return 0;
}
