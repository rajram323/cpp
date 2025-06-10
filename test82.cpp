#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec;

    // cout << vec[100000] << endl;
    try
    {
        cout << vec.at(100000) << endl;
    }
    catch (...)
    {
        cout << "inside catch block" << endl;
    }

    cout << "after try catch in main" << endl;

    return 0;
}
