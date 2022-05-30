// C Programme to display 2d array using pointer variable

#include <stdio.h>

int main()
{
    int b[4][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};
    int(*p)[5];
    p = b;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ",*(*(p+i)+j)); // p[i][j] is same as *(*(p+i)+j))
        }
        printf("\n");
    }
    return 0;
}