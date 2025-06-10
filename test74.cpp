// what is segment fault and how to debug them?
// segemntaion fault due to memory access violation

// stack overflow
// write violation
// read violation
// and many all but all are related to memory access

#include <iostream>
using namespace std;

int main()
{
    int *i = NULL;
    *i = 10;
    cout << *i << endl;
}

// g++ -g app.c
// ./aout
// created core dump
// gdb a.out core
