#include <stdio.h>
#include <conio.h>

void main()
{
    int flag = 0;
    if (!flag)
    {
        printf("The flag is not set.\n");
        flag = !flag;
    }
    printf("The value of flag is %d\n", flag);

    getch();
}
