// C Programme to check whether the given sides are sides of a triangle  or not

#include<stdio.h>

int main(){
    
    int a, b, c, t, s;
    printf("Enter the three sides of a triangle: ");
    scanf("%d %d %d",&a, &b, &c);
    t=((a+b)>c)&&((b+c)>a)&&((c+a)>b);
    s=t*(a+b+c);
    printf("Do they satisfy the triangle property?\n");
    printf("Displaying sum of sides if yes or else 0: %d",s);

    return 0;
}