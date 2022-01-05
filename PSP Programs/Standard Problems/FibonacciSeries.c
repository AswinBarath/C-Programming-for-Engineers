#include <stdio.h>

int main()
{
    int fib[15];
    int i;
    fib[0] = 0;
    fib[1] = 1;
    for (i = 2; i < 15; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    for (i = 0; i < 15; i++)
        printf(“% d\n”, fib[i]);
    return 0;
}
