// C Programme for swapping numbers

#include <stdio.h>

int main()
{

    int i, a, b, c, d, m[10];

    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
    {

        scanf("%d", &m[i]);
    }
    for (i = 0; i < 10; i = i + 2)
    {
        c = m[i];
        m[i] = m[i + 1];
        m[i + 1] = c;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", m[i]);
    }
    return 0;
}