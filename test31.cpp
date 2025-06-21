// What Is Return Value Of printf And scanf In C/C++?
// printf returns the number of characters printed successfully and
// scanf returns the number of elements read succesfully from console

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char array[100];
    int val;

    int printout = printf("%s", "hi there!!\n");
    int scanout = scanf("%s", array);

    cout << printout << endl;

    cout << scanout << endl;
}
