#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    for (int i = 0; i < 5; i++)
        ptr[i] = i + 1;

    printf("Elements: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);

    free(ptr);
    return 0;
}