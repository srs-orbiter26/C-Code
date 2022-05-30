// C Programming to add two matrix

#include <stdio.h>

int main()
{

    int i, j, x, y, m, n;
    int a[4][4];
    int b[4][4];
    int c[4][4];

    printf("Enter the matrix: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the matrix: \n");
    for (x = 0; x < 4; x++)
    {
        for (y = 0; y < 4; y++)
        {
            scanf("%d", &b[x][y]);
        }
        printf("\n");
    }

    for (m = 0; m < 4; m++)
    {
        for (n = 0; n < 4; n++)
        {
            c[m][n] = a[m][n] + b[m][n];
        }
    }
    for (m = 0; m < 4; m++)
    {
        for (n = 0; n < 4; n++)
        {
            printf("%d ", c[m][n]);
        }
        printf("\n");
    }
    return 0;
}