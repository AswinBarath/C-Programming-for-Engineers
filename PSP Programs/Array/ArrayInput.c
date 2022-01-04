#include <stdio.h>
#define ARRAY_SIZE 10

int main()
{
    int index, a[ARRAY_SIZE];
    for (index = 0; index < ARRAY_SIZE; index++)
    {
        scanf(“% d”, &a[index]);
        printf(“a[% d] = % d\n”, index, a[index]);
    }
    printf(“\n”);
    return 0;
}
