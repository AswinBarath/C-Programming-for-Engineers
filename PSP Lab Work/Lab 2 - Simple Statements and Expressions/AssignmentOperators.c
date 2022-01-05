#include <stdio.h>

void main()
{
    int a, b; // program to demonstrate pre and post increment operators
    a = 5;
    b = 3;
    //sum
    a += b;
    printf("Sum a+=b is %d \n", a);

    a = 5;
    a *= b;
    printf("Sum a*=b is %d \n", a);

    a = 5;
    a /= b;
    printf("Sum a/=b is %d \n", a);

    a = 5;
    a %= b;
    printf("Sum a mod b is %d \n", a);

    a = 5;
    a -= b;
    printf("Sum a-=b is %d \n", a);
}
