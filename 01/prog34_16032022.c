// C Programme to know acceleration or deceleration

#include<stdio.h>

int main(){
    
    int a;
    printf("Enter the value of Acceleration: ");
    scanf("%d", &a);

    if(a==0){
        printf("The Vehicle is moving with Constant Velocity.");
    }
    else if(a>0){
        printf("The Vehicle is moving with Acceleration.");
    }
    else{
        printf("The Vehicle is moving with Deceleration.");
    }

    return 0;
}