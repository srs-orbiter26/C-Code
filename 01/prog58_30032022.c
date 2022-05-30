// C Programme for performing arithmetic operations

#include <stdio.h>

int main()
{

    int a, b, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Type 1 for +\n");
    printf("Type 2 for -\n");
    printf("Type 3 for *\n");
    printf("Type 4 for /\n");
    printf("Type 5 for %%\n");
    printf("Enter the number to perform operation: ");
    scanf("%d", &i);

    switch (i)
    {

    case 1:
        printf("%d", a + b);
        break;
    case 2:
        printf("%d", a - b);
        break;
    case 3:
        printf("%d", a * b);
        break;
    case 4:
        printf("%d", a / b);
        break;
    case 5:
        printf("%d", a % b);
        break;
    default:
        printf("Error in typing operand.");
    }
    return 0;
}