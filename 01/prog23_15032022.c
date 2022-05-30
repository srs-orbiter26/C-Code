// C Programme to check whether the given lines are perpendicular or not

#include<stdio.h>

int main(){
    
    float a, b, c, d, e, f, g, h, m1, m2, s;
    printf("Enter the first coordinates of line1: ");
    scanf("%f %f", &a, &b);
    printf("Enter the second coordinates of line1: ");
    scanf("%f %f", &c, &d);
    printf("Enter the first coordinates of line2: ");
    scanf("%f %f", &e, &f);
    printf("Enter the second coordinates of line2: ");
    scanf("%f %f", &g, &h);
    m1=(d-b)/(c-a);
    m2=(h-f)/(g-e);
    s=m1*m2*-1;
    printf("The given lines are perpendicular. Displaying 1 if yes or any other integer if no: %f",s);
    
    return 0;
}