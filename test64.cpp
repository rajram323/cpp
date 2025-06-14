#include <iostream>
using namespace std;

int main()
{
    int number = 3; // 0011

    // set one bit  [use of bit wise OR operator]
    int bitpos = 2;
    number |= (1 << bitpos);
    cout << number << endl;

    // unset one bit  [use of bit wise OR operator]
    int bitpos = 2;
    number &= ~(1 << bitpos);
    cout << number << endl;

    // toggle one bit  [use of bit wise OR operator]
    int bitpos = 2;
    number ^= ~(1 << bitpos);
    cout << number << endl;

    // checking one bit  [use of bit wise OR operator]
    int bitpos = 2;
    int bit = (number >> bitpos) & 1;
    cout << number << endl;

    // checking one bit  [use of bit wise OR operator]
    int bitpos = 2;
    int bit = (number >> bitpos) & 1;
    cout << number << endl;

    // changing nth bit to bitval
    int n = 2;
    int bitval = 1;
    number = number & ~(1 << n) | (bitval << n);
    cout << number << endl;

    return 0;
}
