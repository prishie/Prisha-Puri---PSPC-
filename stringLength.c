#include<stdio.h>
int main ()
{
    char str[] = "Hello CBIT";
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    printf("Length of %s : %d\n", str, length);
    return 0;
}
