/* sample program using a for statement
*/
#include <stdio.h>

int main() /* Program introduces the for statement, counts to ten */
{
    int count;
    for (count = 1; count <= 10; count = count + 1)
        printf("%d ", count);
    printf("\n");
    return 0;
}
