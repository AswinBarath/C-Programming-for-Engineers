#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    char s[30], t[30];
    printf("\n Enter the string:");
    scanf("%[^\n]", s);
    n = strlen(s) - 1;
    for (i = 0, j = n; j >= 0; i++, j--)
        t[i] = s[j];
    t[i] = '\0';
    printf("\nReverse of string is %s\n", t);
    if (strcmp(s, t) == 0)
        printf("String is Palindrome");
    else
        printf("String is not Palindrome");
    return 0;
}
