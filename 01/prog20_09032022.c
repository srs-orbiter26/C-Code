// C Programme to determine velocity and distance when a mass is drop from a Eiffel Tower

#include<stdio.h>
#define g 9.8

int main(){
    int u=0,t=0;
    float v,s;
    
    t++;
    v=u + g*t;
    s= u*t + 0.5*g*t*t;
    printf("\nThe velocity is %fm/s and the distance covered is %fm when the body has covered %dsec.",v,s,t);

    t++;
    v=u + g*t;
    s= u*t + 0.5*g*t*t;
    printf("\nThe velocity is %fm/s and the distance covered is %fm when the body has covered %dsec.",v,s,t);

    t++;
    v=u + g*t;
    s= u*t + 0.5*g*t*t;
    printf("\nThe velocity is %fm/s and the distance covered is %fm when the body has covered %dsec.",v,s,t);

    t++;
    v=u + g*t;
    s= u*t + 0.5*g*t*t;
    printf("\nThe velocity is %fm/s and the distance covered is %fm when the body has covered %dsec.",v,s,t);

    t++;
    v=u + g*t;
    s= u*t + 0.5*g*t*t;
    printf("\nThe velocity is %fm/s and the distance covered is %fm when the body has covered %dsec.",v,s,t);
    
    return 0;
}