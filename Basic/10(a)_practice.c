#include <stdio.h>

// swap to num without using third variable
void swap_num(int a, int b)
{
    printf("a=%d b=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a=%d b=%d\n", a, b);
}
// find out the area of rectangle
float areaOfrect(float w, float h)
{
    float area = h * w;
    return area;
}
// print prime numbers till n
void print_prime_num(int n)
{
    int counter = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            if (i % k == 0)
            {
                counter++;
            }
        }
        if (counter == 2)
        {
            printf("%d is Prime Num\n", i);
        }
        counter = 0;
    }
}
// print multiplication table of given int n
void multiplication_table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main()
{
    swap_num(5,8);
    // printf("Area of Rect : %f",areaOfrect(15, 10));
    // print_prime_num(25);
    // multiplication_table(5);
    return 0;
}