// C Programme to find position of numbers

#include <stdio.h>

int g(int m[], int item)
{
    int i, pos;
    for (i = 19; i >= 0; i--)
    {
        if (item == m[i])
        {
            return i;
        }
    }
    return (-1);
}
int main()
{

    int h, i, item, m[20];
    printf("Enter Item: ");
    scanf("%d", &item);
    for (i = 0; i < 20; i++)
    {
        printf("Enter data: ");
        scanf("%d", &m[i]);
    }
    h = g(m, item);

    if (h == -1)
        printf("Item is not matched.");
    else
        printf("Item is present in position %d", h);
    return 0;
}