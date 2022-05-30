// C Programme to find place of a number

#include <stdio.h>

int main()
{

    int i, item, m[20], pos = -1;
    printf("Enter Item: ");
    scanf("%d", &item);
    for (i = 0; i < 20; i++)
    {
        printf("Enter data: ");
        scanf("%d", &m[i]);
    }
    for (i = 0; i < 20; i++)
    {
        if (item == m[i])
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
        printf("Item is not matched.");
    else
        printf("Item is present in position %d.", pos);
    return 0;
}