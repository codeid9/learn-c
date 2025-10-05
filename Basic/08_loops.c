#include <stdio.h>

int main()
{
    // print from 1 to 5 using while loop
    int i = 1;
    while (i <= 5)
    {
        printf("Hello %d\n", i);
        i++;
    }

    // print even num from 0-10 using do while
    int j = 0;
    do
    {
        if (j % 2 == 0)
        {
            printf("%d\n", j);
        }
        j++;
    } while (j <= 10);

    // print cube from 1-5 using for loop
    for (int k = 1; k <= 5; k++)
    {
        printf("%d\n", k * k * k);
    }

    return 0;
}