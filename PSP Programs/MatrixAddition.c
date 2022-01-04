#include <stdio.h>

int main()
{
    int m, n, i, j;
    int a[10][10], b[10][10], c[10][10];
    printf("Enter the size of the matrix \n");
    scanf("%d%d", &m, &n);
    printf("enter the values into the first matrixx \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix entered is \n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }

    printf("enter the values into the second matrixx \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The matrix entered is \n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }

    //matrix addition

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j]; //for matrix subtraction replace + by -
        }
    }

    printf("The resultant matrix after addition is \n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }
}
