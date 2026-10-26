#include<stdio.h>
int main ()
{
    char source[] = "Hello CBIT";
    char destination[20];
    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
    printf("Copied string: %s\n", destination);
    return 0;
}
