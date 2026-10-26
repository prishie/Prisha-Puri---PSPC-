#include<stdio.h>
int main ()
{
    char s1[50] = "Hello ";
    char s2[] = "CBIT!";
    int i = 0, j = 0;
    while (s1[i] != '\0')
    {
        i++;
    }
    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    printf("Concatenated string: %s\n", s1);
    return 0;
}
