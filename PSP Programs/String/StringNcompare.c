// strncmp(s1, s2, n) compares the first ‘n’ characters of s1 and s2.

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Hello";
    char s2[] = "World";
    int i, j;
    i = strncmp(s1, "He Game", 2);
    printf("%d\n", i);
    return 0;
}
