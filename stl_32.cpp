span in C++20
it is avialable from c++20
std::span<T>

#include <vector>
#include <iostream>
#include <array>
#include <span>

void print_content(std::span<int> container){

  for(const &it : container){
      std::cout << it << " ";
  }

   std::cout << "\n"; 

}

int main(){

int a[]{23, 77, 88, 35, 78, 92};
print_content(a);

std::vector v{1, 2, 3, 5, 8};
print_content(v);

std::vector a2{1, 2, 3, 5, 8};
print_content(a2);

}



