// C Programme to find largest among entered numbers using pointers

#include <stdio.h>

int compare(int *x, int y)
{
    int i, temp = 0;

    for (i = 0; i < y; i++)
    {
        if (x[i] > temp)
        {
            temp = x[i];
        }
    }
    return temp;
}
int main()
{

    int a, b, m;
    printf("Enter the size of array: ");
    scanf("%d", &a);
    int x[a], i;
    printf("Enter value in array: ");
    for (i = 0; i < a; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("\n");

    m = compare(x, a);

    printf("The largest among the number is %d.", m);

    return 0;
}