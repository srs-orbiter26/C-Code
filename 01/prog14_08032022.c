#include <stdio.h>
#define PI 3.14

int main(){
    float r;
    printf("Enter the value of radius: ");
    scanf("%f", &r);

    float area=PI*r*r;
    printf("The area of given circle is %f.\n", area);
    float perimeter= 2 * PI * r;
    printf("The perimeter of given circle is %f.", perimeter);

    return 0;
}