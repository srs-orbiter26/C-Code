// C Programme in switch case

#include <stdio.h>

int main()
{

    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    switch (a)
    {

    case 1:
        printf("This is case 1.");
        break;
    case 2:
        printf("This is case 2.");
        break;
    case 3:
        printf("This is case 3.");
        break;
    case 4:
        printf("This is case 4.");
        break;
    default:
        printf("This is default.");
    }
    return 0;
}