// C Programme using arrays

#include <stdio.h>

int search(int a, int b, int c, int m[])
{
    int i;
    for (i = b; i < c; i++)
    {
        if (m[i] == a)
            return i;
    }
    return -1;
}
int main()
{

    int i, a, b, c, d, m[10];
    printf("Enter item: ");
    scanf("%d", &a);
    printf("Enter the starting: ");
    scanf("%d", &b);
    printf("Enter the ending: ");
    scanf("%d", &c);
    for (i = 0; i < 10; i++)
    {
        printf("Enter data: ");
        scanf("%d", &m[i]);
    }
    d = search(a, b, c, m);
    if (d)
        printf("The position is %d.", d);
    else
        printf("-1");

    return 0;
}