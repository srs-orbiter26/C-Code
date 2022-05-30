// C Programme to find product of integer and floating numbers

#include <stdio.h>

float product(int a, float b)
{

    float c = a * b;
    return c;
}
int main()
{

    int a;
    float b;
    float c;

    printf("Enter the int number: ");
    scanf("%d", &a);
    printf("Enter the floating number: ");
    scanf("%f", &b);
    c = product(a, b);
    printf("The product of entered numbers is %.2f.", c);

    return 0;
}