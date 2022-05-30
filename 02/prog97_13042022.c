// C Programme to multiply two matrix

#include <stdio.h>

int n, m, v, n1, m1, v1;
void multiply(int a[][m], int b[][m1], int c[][n1])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < m; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{

    printf("Enter the data for matrix 1: \n");
    printf("Enter the no of row: \n");
    scanf("%d", &n);

    printf("Enter the no of column: \n");
    scanf("%d", &m);

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("\nEnter the  [%d][%d] th element : ", i, j);
            scanf("%d", &v);
            a[i][j] = v;
        }
    }
    printf("Enter the data for matrix 2: \n");
    printf("Enter the no of row: \n");
    scanf("%d", &n1);

    printf("Enter the no of column: \n");
    scanf("%d", &m1);

    int b[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("\nEnter the  [%d][%d] th element : ", i, j);
            scanf("%d", &v1);
            b[i][j] = v1;
        }
    }
    int c[m][n1];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            c[i][j] = 0;
        }
    }

    if (n == m1)
    {
        multiply(a, b, c);
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}