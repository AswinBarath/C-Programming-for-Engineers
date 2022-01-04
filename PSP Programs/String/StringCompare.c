// strcmp(s1, s2) compares two strings and finds out whether they are same or different. It compares the two strings character by character till there is a mismatch. If the two strings are identical, it returns a 0. If not, then it returns the difference between the ASCII values of the first non-matching pair of characters.

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "jkl";
    char s2[] = "jkq";
    int i, j;
    i = strcmp(s1, "Hello");
    printf("%d", i);
    return 0;
}
