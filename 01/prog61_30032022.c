// C Programme to add two numbers using functions

#include <stdio.h>

int sum(int a, int b)
{
    int c = a + b;

    return c;
}
int main()
{

    int n, m;
    printf("Enter two numbers to be added: ");
    scanf("%d %d", &n, &m);

    int g = sum(n, m);
    printf("The addition of given numbers is %d.", g);
    return 0;
}