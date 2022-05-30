// C Programming to find positive,negative,even and odd

#include <stdio.h>

int main()
{

    int i, pos = 0, neg = 0, even = 0, odd = 0;
    int a[20];
    for (i = 0; i < 20; i++)
    {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 20; i++)
    {
        if (a[i] > 0)
        {
            pos++;
        }
        if (a[i] < 0)
        {
            neg++;
        }
        if (a[i] > 0 && a[i] % 2 == 0)
        {
            even++;
        }
        if (a[i] > 0 && a[i] != 0)
        {
            odd++;
        }
    }

    printf("The number of positive numbers entered by the keyboard are %d.\n", pos);
    printf("The number of negative numbers entered by the keyboard are %d.\n", neg);
    printf("The number of even numbers entered by the keyboard are %d.\n", even);
    printf("The number of odd numbers entered by the keyboard are %d.\n", odd);
    return 0;
}