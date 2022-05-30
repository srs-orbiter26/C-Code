// C Programme to convert lowercase to uppercase

#include <stdio.h>

int ul()
{
    char ch;
    printf("Enter the lowercase letter: ");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
        return (ch);
    else
        return (ch - 32);
}
int main()
{
    int a;
    a = ul();
    printf("The uppercase of entered lowercase is %c.", a);

    return 0;
}