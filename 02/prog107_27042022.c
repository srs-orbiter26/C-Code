#include <stdio.h>

int sum(int *a, int *b, int n, int o, int p)
{
    int i, s1 = 0, s2 = 0;
    for (i = n; i < o; i++)
    {
        s1 = s1 + *(a + i);
    }
    for (i = n; i < p; i++)
    {
        s2 = s2 + *(b + i);
    }
    if (s1 == s2)
    {
        return 0;
    }
    else if (s1 > s2)
    {
        return 1;
    }
    else if (s2 > s1)
    {
        return 2;
    }
}
int main()
{

    int a, b, m, n;
    printf("Enter the size of two arrays: ");
    scanf("%d %d", &a, &b);
    int x[a], y[b], i, j;
    printf("Enter value in first array: ");
    for (i = 0; i < a; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("Enter values in second array: ");
    for (j = 0; j < b; j++)
    {
        scanf("%d", &y[j]);
    }
    for (i = 0; i < a; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\n");

    for (j = 0; j < b; j++)
    {
        printf("%d ", y[j]);
    }
    printf("\n");

    printf("Enter from where you want the sum: ");
    scanf("%d", &m);

    n = sum(x, y, m, a, b);
    if (n == 0)
    {
        printf("Both sums are equal.");
    }
    else if (n == 1)
    {
        printf("x is greater than y.");
    }
    else if (n == 2)
    {
        printf("y is greater than x.");
    }
    return 0;
}