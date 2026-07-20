#include <stdio.h>

void insert(int a[], int *n)
{
    printf("Enter element: ");
    scanf("%d", &a[*n]);
    (*n)++;
}

void search(int a[], int n)
{
    int i, key;

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            return;
        }
    }

    printf("Element not found\n");
}

void delete(int a[], int *n)
{
    int i, key;

    printf("Enter element to delete: ");
    scanf("%d", &key);

    for(i = 0; i < *n; i++)
    {
        if(a[i] == key)
            break;
    }

    if(i == *n)
    {
        printf("Element not found\n");
        return;
    }

    for(; i < *n - 1; i++)
        a[i] = a[i + 1];

    (*n)--;

    printf("Element deleted\n");
}

void sort(int a[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Array sorted\n");
}

void display(int a[], int n)
{
    int i;

    printf("Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
}

int main()
{
    int a[100], n = 0, ch;

    do
    {
        printf("\n1.Insert\n2.Search\n3.Delete\n4.Sort\n5.Display\n6.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: insert(a, &n); break;
            case 2: search(a, n); break;
            case 3: delete(a, &n); break;
            case 4: sort(a, n); break;
            case 5: display(a, n); break;
            case 6: break;
            default: printf("Invalid choice\n");
        }

    } while(ch != 6);

    return 0;
}
