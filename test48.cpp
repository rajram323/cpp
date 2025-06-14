// how to stop someone inheriting from your class?
// use final keyword , don't use any other twaek to achieve that
// just use final keyword

#include <iostream>
class Base final{
    int b_var;
    public:
    Base() {}
    Base(int var) : b_var(var) {}
}

class Derived: public Base{
    int d_var;
public:
    Derived();
    Derived(int a, int b): Base(a), d_var(b) {}    
};

int main(){
    Derived () {};
    Derived(int a, int b)

    return 0;
}
