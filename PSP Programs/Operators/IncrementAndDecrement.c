#include <stdio.h>

int main()
{
    int a = 10, b = 100;
    float c = 10.5, d = 100.5;
    printf("++a = %d \n", ++a);
    printf("--b = %d \n", --b);
    printf("++c = %f \n", ++c);
    printf("--d = %f \n", --d);

    // program to demonstrate pre and post increment operators
    int x = 5;
    printf("value of x before increment is %d \n", x++);
    // increment within printf() does not get reflected in that printf() statement and output x=5
    x++;
    printf("Value of x after incrementing is %d \n", x);

    return 0;
}
