#include <iostream>
using namespace std;

int main()
{

    int number = 7;
    int count = 0;

    // simple way
    while (number)
    {
        count = count + (number & 1);
        number >>= 1;
    }
    cout << count << endl;

    // Brian kernighan's way
    for (count = 0; number; ++count)
    {
        number &= number - 1;
    }

    return 0;
}
