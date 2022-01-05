// strlen(s1) calculates the length of string s1.

#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Hello";
    int len1, len2;
    len1 = strlen(name);
    len2 = strlen("Hello World");
    printf("length of %s = %d\n", name, len1);
    printf("length of %s = %d\n", "Hello World", len2);
    return 0;
}
