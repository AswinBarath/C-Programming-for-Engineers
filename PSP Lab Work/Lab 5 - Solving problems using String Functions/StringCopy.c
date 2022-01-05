// strcpy(s1, s2) copies the second string s2 to the first string s1.

#include <string.h>
#include <stdio.h>

int main()
{
    char s2[] = "Hello";
    char s1[10];
    strcpy(s1, s2);
    printf("Source string = %s\n", s2);
    printf("Target string = %s\n", s1);
    return 0;
}
