// when to use extern c in cpp?
// when ypu are writting cpp cpde and including c vode in that

#include <iostream>
#include <typeinfo>
#include "cfile.h"
// int add(int a){}
// int add(float a){}

// extern "C"
// {
// #include "cfile.h"
// }
using namespace std;

int main()
{
    fun();
    return 0;
}

// cfile.c
#include <stdio.h>
#include "cfile.h"

void fun()
{
    printf("I am in c file\n");
}

// cfile.h
void fun();

// gcc -c cfile.c
//  app.cpp cfile.c cfile.h cfile.o
// g++-6 -c app.cpp
//  app.cpp app.o cfile.c cfile.h cfile.o
// g++-6 app.0 cfile.o
//  gives error
// nm app.o
