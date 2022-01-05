// strncpy(s1, s2, n) copies the first ‘n’ characters of the second string s2 to the first string s1.

#include <string.h>
#include <stdio.h>

int main()
{
    char s2[] = "Hello";
    char s1[10];
    strncpy(s1, s2, 2);
    s1[2] = '\0'; /* null character manually added */
    printf("Source string = %s\n", s2);
    printf("Target string = %s\n", s1);
    return 0;
}
