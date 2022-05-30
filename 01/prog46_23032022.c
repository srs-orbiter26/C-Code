//C Programme to display whether a number is prime or not

#include<stdio.h>

int main(){
    int num,i,flag=1,t;
    printf("Enter the number to check whether it is prime or not: ");
    scanf("%d",&num);
    t=num/2;
    for(i=2;i<=t;i++){
        if(num%i==0){
            flag=0;
            break;
        }
    }
    if(flag)
        printf("The number typed is Prime.");
    else
        printf("The number typed is not Prime.");
    return 0;
}