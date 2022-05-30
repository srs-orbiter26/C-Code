// C Programme to multiply a scalar with an array

#include <stdio.h>

void modify(int a[], int s, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        a[i] = s * a[i];
    }
}
int main()
{

    int i, n, s;
    int a[100];
    printf("Enter n numbers: ");
    scanf("%d", &n);
    printf("Enter the numbers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to be multiplied to the matrix: ");
    scanf("%d", &s);
    modify(a, s, n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}