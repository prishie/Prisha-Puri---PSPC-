#include<stdio.h>
int main ()
{
    int i, n, key, a[100], found = 0;
    printf("Enter no. of elements in array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("Element not found\n");
    }
    return 0;
}
