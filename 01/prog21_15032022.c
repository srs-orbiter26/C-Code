// C Programme to check whether the given sides are sides of a triangle  or not

#include<stdio.h>

int main(){
    
    int a, b, c, t;
    printf("Enter the three sides of a triangle: ");
    scanf("%d %d %d",&a, &b, &c);
    t=((a+b)>c)&&((b+c)>a)&&((c+a)>b);
    printf("Do they satisfy the triangle property? 1 for yes and 0 for no: %d",t);

    return 0;
}