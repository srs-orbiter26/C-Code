// C Programme to make use of function

#include <stdio.h>

void display(int n, char ch)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%c", ch);

    printf("\n");
}
int main()
{

    int a = 10, b = 5;
    display(20, 5);
    display('a', 48);
    display('5', 'Y');
    return 0;
}