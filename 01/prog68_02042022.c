// C Programme to display power

#include <stdio.h>

int power(int a, int b)
{

    int c = 1;
    for (int i = 0; i < b; i++)
    {
        c = c * a;
    }
    return c;
}

int main()
{

    int a, b, c;
    printf("Enter the base: ");
    scanf("%d", &a);
    printf("Enter the power: ");
    scanf("%d", &b);
    c = power(a, b);
    printf("%d", c);
    return 0;
}