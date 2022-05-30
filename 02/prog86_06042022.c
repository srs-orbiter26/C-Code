// C Programme to swap numbers

#include <stdio.h>

int main()
{

    int i, a, b, c, d, m[10];

    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
    {

        scanf("%d", &m[i]);
    }
    int j = 9;
    for (i = 0; i < j; i++)
    {
        c = m[i];
        m[i] = m[j];
        m[j] = c;
        j--;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", m[i]);
    }
    return 0;
}