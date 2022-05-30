// C Programme to check division out of given marks

#include<stdio.h>

int main(){
    
    int p,c,m,b,e,per;
    printf("Enter the marks of five subjects: ");
    scanf("%d %d %d %d %d", &p, &c, &m, &b, &e);

    per=(p+c+m+b+e+4.9)/5;
    
    if(per>=60)
        printf("You are in First Division.");
    else if(per>=50)
        printf("You are in Second Division.");
    else if(per>=40)
        printf("You are in Third Division.");
    else
        printf("You are fail.");

    return 0;
    
}