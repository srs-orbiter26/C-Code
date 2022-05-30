// C Programme to make use of function

#include <stdio.h>

void display(int n)
{

    int i;
    for (i = 0; i < n; i++)
        printf("=");
    printf("\n");
}

int main()
{

    int a = 10, b = 5;
    display(20);
    display(a);
    display(a + b + 2);
    return 0;
}