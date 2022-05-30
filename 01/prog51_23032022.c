// C Programme to display sum of entered number

#include<stdio.h>

int main(){

    int n,i,s=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while (n!=0)
    {
        int d=n%10;
        s=s+d;
        n=n/10;
    }
    printf("The sum of digits of the given number is %d.",s);
    return 0;
}