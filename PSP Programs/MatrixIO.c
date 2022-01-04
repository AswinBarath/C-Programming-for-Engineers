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
}
