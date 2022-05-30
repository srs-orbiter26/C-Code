#include<stdio.h>
int main()
{
    char a;
    int b;
    float c;
    printf("Enter a character: \n");
    scanf("%c", &a);
    printf("The entered character is %c.\n",a);
    printf("Enter an integer: \n");
    scanf("%d", &b);
    printf("The entered integer is %d.\n",b);
    printf("Enter a floating number: \n");
    scanf("%f", &c);
    printf("The entered floating number is %f.\n",c);

    return 0;
}