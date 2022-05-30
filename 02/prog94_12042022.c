// C Programming to print transpose of a matrix

#include <stdio.h>

int main()
{

    int i, j, t;
    int a[100][100];
    printf("Enter the matrix: \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("The transpose of a matrix is: ");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}