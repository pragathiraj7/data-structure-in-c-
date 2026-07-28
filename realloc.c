#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(3 * sizeof(int));

    for (int i = 0; i < 3; i++)
        ptr[i] = i + 1;

    ptr = (int *)realloc(ptr, 5 * sizeof(int));

    ptr[3] = 4;
    ptr[4] = 5;

    printf("Elements:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);

    free(ptr);
    return 0;
}