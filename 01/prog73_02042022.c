// C Programme to find factors

#include <stdio.h>

int main()
{

    int a, count = 2;
    printf("Enter the number: ");
    scanf("%d", &a);

    while (a > 1)
    {
        if (a % count == 0)
        {
            printf("%d\n", count);
            a = a / count;
        }
        else
        {
            count++;
        }
    }
    return 0;
}