// C Programming to find symmetric or not

#include <stdio.h>

int main()
{

    int i, j;
    int a[4][4];
    printf("Enter the matrix: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    if (a[i][j] == a[j][i])
    {
        printf("It is a symmetric matrix.");
    }
    else
    {
        printf("It is not symmetric.");
    }
    return 0;
}