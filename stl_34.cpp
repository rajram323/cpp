#include <iostream>
#include <vector>
using namespace std;

int main{
  vector<int> vec;

  // cout << v[100000000000000000];       error

  try{
      v.at(100000000000000000);
  }catch{
      cout << "out of range exception handled"
  }

  cout << "hi i am app still alive";  
}

