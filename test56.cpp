#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int *intptrl = (int *)malloc(5 * sizeof(int));
    memset(intptrl, 0, sizeof(intptrl));

    int *intptr2 = (int *)calloc(5, sizeof(int));

    free(intptrl);
    free(intptr2);
}
