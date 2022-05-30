// C Programming to print entered matrix

#include <stdio.h>

int main()
{

    int i, j, x, y, m, n;
    int a[4][5];

    printf("Enter the matrix: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("The entered matrix is: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}