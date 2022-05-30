// C Programme to display pyramid pattern

#include<stdio.h>

int main(){
    
    int i,j,n;
    printf("Enter the number of rows till which you want pattern: ");
    scanf("%d",&n);

    for (i=0;i<n;i++){
        for(j=0;j<n-1-i;j++)
        printf(" ");
        for(j=0;j<2*i+1;j++)
        printf("S");
        for(j=0;j<n-1-i;j++)
        printf(" ");
        for(j=0;j<n-1-i;j++)
        printf(" ");
        for(j=0;j<2*i+1;j++)
        printf("S");

        printf("\n");
    }
    return 0;
}