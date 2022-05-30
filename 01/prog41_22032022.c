// C Programme to display n numbers in reverse order

#include<stdio.h>

int main(){
    
     int i=1,n;
    printf("Enter the number till which you want reverse: ");
    scanf("%d", &n);

    while(i<=n){
        printf("%d\n",n);
        n=n-1;
    }
    return 0;
}