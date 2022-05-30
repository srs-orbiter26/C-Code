// C Programming to find largest among 5X5

#include <stdio.h>

int main()
{
    int a[5][5], l = 0, posi, posj, i, j;

    printf("Enter the matrix: \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] > l)
            {
                l = a[i][j];
                posi = i;
                posj = j;
            }
        }
    }

    printf("The largest number is %d with a position at (%d,%d)", l, posi + 1, posj + 1);
    return 0;
}