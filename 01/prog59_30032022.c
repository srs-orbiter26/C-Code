// C Programme to perform arithmetic operations

#include <stdio.h>

int main()
{

    int a, b;
    char i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter the operand to be done: ");
    scanf(" %c", &i);

    switch (i)
    {

    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%d", a / b);
        break;
    case '%':
        printf("%d", a % b);
        break;
    default:
        printf("Error in typing operand.");
    }
    return 0;
}