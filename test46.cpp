// why vector was introduced cpp?
// it gives advantage of using array(index based access) and linked list(dynamically increased)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    cout << "size :" << vec.size() << endl;
    cout << "capacity :" << vec.capacity() << endl;

    vec.push_back(1);

    cout << "size :" << vec.size() << endl;
    cout << "capacity :" << vec.capacity() << endl;

    cout << vec[0] << endl;

    return 0;
}
