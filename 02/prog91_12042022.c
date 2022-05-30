// C Programming to reverse a matrix

#include <stdio.h>

int main()
{

    int i, j;
    int a[4][4];
    int b[4][4];
    printf("Enter the matrix: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            b[i][j] = a[4 - i - 1][4 - j - 1];
        }
    }
    printf("The reverse of entered matrix is: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}