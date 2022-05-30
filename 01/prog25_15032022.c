// C Programme to check whether the given sides are sides of right angled triangle or not
#include<stdio.h>

int main(){
    
    int a, b, c, t;
    printf("Enter the three sides of a triangle: ");
    scanf("%d %d %d",&a, &b, &c);
    t=(a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b);
    printf("Is it a right angled triangle? 1 for yes and 0 for no: %d",t);
    
    return 0;
}