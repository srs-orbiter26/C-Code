// C Programme to display n numbers on different lines

#include<stdio.h>

int main(){
    
    int i,n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for (i=0;i<n;printf("%d\n",++i));
    return 0;
}