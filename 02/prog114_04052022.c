// C Programme to access 2d array using functions

#include <stdio.h>

void add_mat_row(int (*pa)[5], int *pb) // pa[][5] is same as (*pa)[5]
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        pb[i] = 0;
        for (j = 0; j < 5; j++)
        {
            pb[i] = pb[i] + pa[i][j];
        }
    }
}
int main()
{

    int i, y[4];
    int x[4][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};
    add_mat_row(x, y);

    for (i = 0; i < 4; i++)
    {
        printf("%d", y[i]);
        printf("\n");
    }
    return 0;
}