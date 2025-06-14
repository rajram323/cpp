#include <iostream>
#include <vector>
using namespace std;

#define Size 10

void foo(std::vector<int> vec)
{
    for (auto v : vec)
    {
        std::cout << v << std::endl;
    }
}

int main()
{

    std::vector<int> vec(Size);

    // used for something
    for (int i = 0; i < Size; i++)
    {
        vec[i] = i;
    }

    foo(vec);
    return 0;
}
