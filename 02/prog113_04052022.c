// C Programme to access a 2d array

#include <stdio.h>

int main()
{
    int a[4][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};
    int(*pa)[5], *pb;
    int i, j;
    int b[4] = {0, 0, 0, 0};

    pa = a;
    pb = b;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            pb[i] = pb[i] + pa[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {

        printf("%d ", pb[i]);

        printf("\n");
    }
    return 0;
}