// C Programme to find largest, smallest and number of odd using pointers

#include <stdio.h>

int large(int *x, int y)
{
    int i, temp = 0;

    for (i = 0; i < y; i++)
    {
        if (x[i] > temp)
        {
            temp = x[i];
        }
    }
    return temp;
}
int small(int *x, int y)
{
    int i, temp = __INT_MAX__;

    for (i = 0; i < y; i++)
    {
        if (x[i] < temp)
        {
            temp = x[i];
        }
    }
    return temp;
}
int odd(int *x, int y)
{
    int i, count = 0;

    for (i = 0; i < y; i++)
    {
        if (x[i] % 2 != 0)
        {
            count = count + 1;
        }
    }
    return count;
}
int main()
{

    int a, b, m, n, f;
    printf("Enter the size of array: ");
    scanf("%d", &a);
    int x[a], i;
    printf("Enter value in array: ");
    for (i = 0; i < a; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("\n");

    m = large(x, a);
    n = small(x, a);
    f = odd(x, a);

    printf("The largest among the number is %d.\n", m);
    printf("The smallest among the number is %d.\n", n);
    printf("The number of odd numbers among the numbers is %d.", f);

    return 0;
}