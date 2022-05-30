#include<stdio.h>
#define g 9.8

int main(){
    float v,s,u,t;
    printf("Enter the initial velocity of mass: ");
    scanf("%f",&u);
    printf("Enter the time travelled by the mass: ");
    scanf("%f",&t);
    v=u+g*t;
    s=t*u+ 0.5 *t*t*g;
    printf("The value of final velocity is %f.\n",v);
    printf("The value of distance covered is %f.",s);
    
    return 0;
}