// C Programme to display grades

#include <stdio.h>

int main()
{

    int p, i;
a:
    printf("Enter the total marks out of 600: ");
    scanf("%d", &p);

    if (p <= 600)
    {
        i = (p * 100) / 600;
        i = i / 10;

        switch (i)
        {

        case 9:
            printf("Your grade is O.");
            break;
        case 10:
            printf("Your grade is O.");
            break;
        case 8:
            printf("Your grade is E.");
            break;
        case 7:
            printf("Your grade is A.");
            break;
        case 6:
            printf("Your grade is B.");
            break;
        case 5:
            printf("Your grade is C.");
            break;
        case 4:
            printf("Your grade is D.");
            break;
        default:
            printf("Sorry,you are fail.");
        }
    }

    else
    {
        printf("Invalid Input.");
        goto a;
    }

    return 0;
}