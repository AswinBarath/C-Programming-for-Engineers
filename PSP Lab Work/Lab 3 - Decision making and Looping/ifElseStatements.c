#include <stdio.h>
#include <conio.h>

void main()
{
    int number;
    int valid = 0;
    while (valid == 0)
    {
        printf("Enter a number between 1 and 10 -->");
        scanf("%d",
              &number);
        if (number < 1)
        {
            printf("Number is below 1. Please re-enter\n");
            valid = 0;
        }
        else if (number > 10)
        {
            printf("Number is above 10. Please re-enter\n");
            valid = 0;
        }
        else
    }
    valid = 1;
    printf("The number is %d\n", number);
    getch();
}
