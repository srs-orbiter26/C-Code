// C Programme to display sum of digits of given number

#include <stdio.h>

int rev(int a)
{

    int n, r, m = 0;
    while (a)
    {
        r = a % 10;
        m = m + r;
        a = a / 10;
    }
    return m;
}

int main()
{

    int n, a;
    printf("Enter the digit: ");
    scanf("%d", &n);
    a = rev(n);
    printf("The sum of digits of entered number is %d.", a);

    return 0;
}