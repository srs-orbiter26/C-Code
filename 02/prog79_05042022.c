// C Programme to find factorial till 8

#include <stdio.h>

int factorial(int n)
{
    if (n == 1)
        return (1);
    else
        return (n * factorial(n - 1));
}
int main()
{
    int i, a, fact;
    for (i = 1; i <= 8; i++)
    {
        printf("The factorial of %d is %d.\n", i, factorial(i));
    }
    return 0;
}