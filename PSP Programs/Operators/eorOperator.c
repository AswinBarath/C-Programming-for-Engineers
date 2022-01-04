/* Example program using EOR operator */
#include <stdio.h>
#include <conio.h>

void main()
{
    int value1 = 2, value2 = 4;
    value1 ^= value2;
    value2 ^= value1;
    value1 ^= value2;
    printf("Value1 = %d, Value2 = %d\n", value1, value2);
    getch();
}