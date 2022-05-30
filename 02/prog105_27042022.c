// C Programme to swap numbers using pointers

#include <stdio.h>

void Swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    Swap(&x, &y);
    printf("%d %d", x, y);
    return 0;
}