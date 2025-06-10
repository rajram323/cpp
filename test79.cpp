#include <iostream>
using namespace std;

int main()
{

    int array[5];

    cout << "array=" << array << endl;
    cout << "&array=" << &array << endl;

    // cout << "array=" << array + 1 << endl;
    // cout << "&array=" << &array + 1 << endl;

    // cout << (&array) - (array);

    cout << (array + 1) - (array);

    return 0;
}
