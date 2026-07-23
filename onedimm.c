#include <stdio.h>

#define SIZE 10

int main()
{
    int a[SIZE];
    int n, i, s, m;

    printf("Enter the no of elements -> ");
    scanf("%d", &n);

    if (n > SIZE)
    {
        printf("\nError: Number of elements exceeded the array size.\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d] -> ", i);
        scanf("%d", &a[i]);
    }

    printf("\nArray Elements with Memory Address\n");

    for (i = 0; i < n; i++)
    {
        printf("Address of a[%d] is %p and Value is %d\n",
               i, (void *)&a[i], a[i]);
    }

    s = 0;
    for (i = 0; i < n; i++)
    {
        s = s + a[i];
    }

    printf("\nSum of elements = %d\n", s);

    m = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > m)
        {
            m = a[i];
        }
    }

    printf("Maximum element = %d\n", m);

    return 0;
}