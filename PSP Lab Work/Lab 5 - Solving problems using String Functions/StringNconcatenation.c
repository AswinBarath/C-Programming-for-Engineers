// strncat(s1, s2, n) concatenates(joins) the first ‘n’ characters of the second string s2 to the first string s1.

#include <stdio.h>
#include <string.h>

int main()
{
    char s2[] = "World";
    char s1[20] = "Hello";
    strncat(s1, s2, 2);
    printf("Source string = %s\n", s2);
    printf("Target string = %s\n", s1);
    return 0;
}
