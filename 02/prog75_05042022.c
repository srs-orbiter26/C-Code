// C Programme to find sum of digits

#include <stdio.h>

int sod(int n)
{

    return (n / 10 ? n % 10 + sod(n / 10) : n);
}
int main()
{
    int a, s;
    printf("Enter the number: ");
    scanf("%d", &a);
    s = sod(a);
    printf("The sum of digits of %d is %d.", a, s);
    return 0;
}