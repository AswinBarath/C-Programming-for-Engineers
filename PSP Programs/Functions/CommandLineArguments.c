#include <stdio.h>

int main(int argc, char *argc[])
{
    if (argc == 2)
    {
        printf("The argument supplied is %s\n", argc[1]);
    }
    else if (argc > 2)
    {
        printf("Too many arguments supplied, dude!\n");
    }
    else
    {
        printf("One argument expected.\n")
    }
    return 0;
}
