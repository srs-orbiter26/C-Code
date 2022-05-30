//C Programme to display factorial of a given number

#include<stdio.h>

int main(){
    
    int i,n,f=1;
    printf("Enter the number for which you want factorial: ");
    scanf("%d",&n);

    for(i=n;i>1;i--){
        f=f*i;
    }
    printf("The factorial of %d is %d.",n,f);
    return 0;
}