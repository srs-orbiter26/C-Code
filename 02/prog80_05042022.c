// C Programme to find gcd of three numbers

#include <stdio.h>

int gcd(int n1, int n2)
{

    int t;
    return (n1 % n2 ? t = gcd(n2, n1 % n2) : n2);
}
int main()
{
    int g, a, b, c;
    printf("Enter three numbers for which you want gcd: ");
    scanf("%d %d %d", &a, &b, &c);
    g = gcd(a, gcd(b, c));
    printf("The gcd for %d, %d and %d is %d.", a, b, c, g);
    return 0;
}