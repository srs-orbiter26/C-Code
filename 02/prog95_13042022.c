// C Programme to find the largest number out of diagonal of a matrix

#include <stdio.h>

int main()
{

    int i, j, m, n, l = 0, posi, posj;

    printf("Enter the no of rows: ");
    scanf("%d", &m);
    printf("Enter the no of columns: ");
    scanf("%d", &n);
    int a[m][n];
    if (m == n)
    {
        printf("Enter the matrix: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
            printf("\n");
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    if (a[i][j] > l)
                    {
                        l = a[i][j];
                        posi = i;
                        posj = j;
                    }
                }
            }
        }
    }
    else
    {
        printf("The entered matrix is not square matrix.");
    }
    printf("The largest number is %d with a position at (%d,%d)", l, posi + 1, posj + 1);
    return 0;
}