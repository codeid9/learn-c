#include <stdio.h>

int main()
{
    // arithmetic operations
    int n1 = 20;
    int n2 = 10;
    printf("Add : %d \n", n1 + n2);
    printf("Subtract : %d \n", n1 - n2);
    printf("Multiply : %d \n", n1 * n2);
    printf("Divide : %d \n", n1 / n2);
    printf("Remainder : %d \n", n1 % n2);
    n1++;
    n2--;
    printf("Increament Operator : %d\n", n1);
    printf("Decreament Operator : %d\n", n2);
    return 0;
}