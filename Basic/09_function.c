#include <stdio.h>

void greet()
{
    printf("Hello From Function Greet!\n");
}

void sum(int x, int y)
{
    printf("%d\n", x + y);
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    greet();
    sum(20, 30);
    int result = multiply(2, 5);
    printf("%d\n", result);
    return 0;
}
