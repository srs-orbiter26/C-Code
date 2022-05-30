// C Programme to find whether a leap year or not

#include <stdio.h>

void leap(int n)
{

    if (n % 4 == 0)
    {
        if (n % 100 != 0)
        {
            printf("It is a leap year.");
        }
        else if (n % 400 == 0)
        {
            printf("It is a leap year.");
        }
        else
            printf("The entered year is not a leap year.");
    }

    else
        printf("The entered year is not a leap year.");
}

int main()
{

    int a;
    printf("Enter the year: ");
    scanf("%d", &a);
    leap(a);
    return 0;
}