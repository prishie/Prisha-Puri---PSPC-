#include <stdio.h>

int main()
{
    int i, n, a[100], max, min;
    printf("Enter no. of elements in array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
    }
    printf("max = %d\n", max);
    printf("min = %d\n", min);
    return 0;
}
