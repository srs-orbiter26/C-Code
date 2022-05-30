// C Programme to display fibonacci

#include <stdio.h>

int fibonacci(int n)
{

    return (n == 1 || n == 2 ? 1 : fibonacci(n - 1) + fibonacci(n - 2));
}
int main()
{

    int a, b;
    printf("Enter the number till which you want fibonacci series: ");
    scanf("%d", &a);
    b = fibonacci(a);
    printf("The fibonacci series till %d is %d.", a, b);
    return 0;
}