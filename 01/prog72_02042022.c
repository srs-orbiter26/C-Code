// C Programme to find sum and average of marks

#include <stdio.h>

float avg(int a, int b, int c)
{
    float avg = a + b + c / 3;
    return avg;
}

float percentage(int a, int b, int c)
{

    float p = ((a + b + c) * 100) / 300;
    return p;
}
int main()
{

    int a, b, c;
    float d, e;
x:

    printf("Enter the marks of three subjects out of 100: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a <= 100 && b <= 100 & c <= 100)
    {

        d = avg(a, b, c);
        e = percentage(a, b, c);
        printf("The average of entered marks is %f.\n", d);
        printf("The percentage of entered marks is %f.\n", e);
    }

    else
    {
        printf("Wrong Input.");
        goto x;
    }

    return 0;
}