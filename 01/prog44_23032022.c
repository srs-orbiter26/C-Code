// C Programme to enter 10 numbers and count number  of odd numbers and their sum

#include<stdio.h>

int main(){
    
    int sum=0,n,count=0,i;

    for(i=0;i<10;i++){

        printf("Enter %d number: ",i+1);
        scanf("%d",&n);

        if(n%2==1){
            count++;
            sum+=n;
        }
    }
    printf("The number of odd numbers are %d and their sum is %d.",count,sum);
    return 0;
}