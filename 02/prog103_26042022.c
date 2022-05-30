// C Programming to add two numbers using pointers

#include<stdio.h>

int main(){
    
    int a,b,c,*p,*q;
    printf("Enter the two numbers to be added: ");
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    c=*p+*q;
    printf("The sum of entered numbers is %d",c);

    return 0;
}