// C Programming to multiply scalar with matrix

#include <stdio.h>

int main()
{

    int i, j, n;
    int a[3][4];
    int b[3][4];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Data for row no %d and column no %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the scalar to be multiplied: ");
    scanf("%d", &n);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            b[i][j] = n * a[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}