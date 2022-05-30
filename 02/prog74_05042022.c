// C Programme to find factorial

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
    int a, fact;
    printf("Enter the number for which you want factorial: ");
    scanf("%d", &a);
    fact = factorial(a);
    printf("The factorial of %d is %d.", a, fact);
    return 0;
}