// C Programme to display area of circle

#include <stdio.h>

float area();
int main()
{

    float a;
    a = area();
    printf("The area of circle is is %.2f.", a);
    return 0;
}
float area()
{

    float area, rad;
    printf("Enter the radius of circle: ");
    scanf("%f", &rad);
    area = 3.14 * rad * rad;
    return (area);
}