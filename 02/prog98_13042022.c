// C Programme to find square root of sum of square of all elements in matrix

#include <stdio.h>
#include <math.h>

int main()
{

    int i, j, m, n, x = 0;

    printf("Enter the no of rows: ");
    scanf("%d", &m);
    printf("Enter the no of columns: ");
    scanf("%d", &n);
    int a[m][n];

    printf("Enter the matrix: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            x = x + a[i][j] * a[i][j];
        }
    }
    float y = sqrt(x);
    printf("%f", y);
    return 0;
}