/**
 * C program to print natural numbers using do while loop
 */

#include <stdio.h>

int main()
{
    /* Loop counter variable declaration */
    int n = 1;

    do
    {
        /* Body of loop */
        printf("%d ", n);

        /* Update loop counter variable */
        n++;

    } while (n <= 10); /* Loop condition */

    return 0;
}
