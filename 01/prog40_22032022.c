// C Programme to display 1 to n in different lines

#include<stdio.h>

int main(){
    
    int i=1,n;
    printf("Enter the number till you want: ");
    scanf("%d", &n);

    while(i<=n){
        printf("%d\n",i);
        i=i+1;
    }
    return 0;
}