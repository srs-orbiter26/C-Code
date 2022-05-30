// C Programme to find base and power

#include <stdio.h>

int p(int a, int b)
{

    if (b == 1)
        return a;
    else
        return (a * p(a, b - 1));
}
int main()
{

    int a, b, c;
    printf("Enter the base and power: ");
    scanf("%d %d", &a, &b);
    c = p(a, b);
    printf("%d", c);
    return 0;
}