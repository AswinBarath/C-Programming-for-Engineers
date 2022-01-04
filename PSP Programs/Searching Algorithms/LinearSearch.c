#include <stdio.h>
#define N 10

void main()
{
    int search;
    int array[N];
    int i, flag = 0;
    for (i = 0; i < N; i++)
    {
        printf("Enter the element at location %d \n", i);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < N; i++)
    {
        printf("element at location %d is %d \n", i, array[i]);
    }

    printf("Enter the number you would wish to search\n");
    scanf("%d", &search);

    for (i = 0; i < N; i++)
    {
        if (array[i] == search)
        {
            printf("Number found at location %d\n", i);
            flag++;
        }
    }
    if (flag == 0)
        printf("Number not found");
    else
        printf("Occurences = %d ", flag);
}
