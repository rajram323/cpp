#include <iostream>
using namespace std;

int fun()
{
    return 1, 2, 3;
    return (1, 2, 3);
}
int main()
{
    int v1, v2;
    v1 = 1, 2, 3;
    v2 = (1, 2, 3);

    cout << v1 << " " << v2 << endl;
    // 1, 3
    return 0;
}
