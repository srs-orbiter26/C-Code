// C Programme to display pattern

#include<stdio.h>

int main(){
    
    int i,j,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<2*i-1;j++)
        printf("S");
        for(j=0;j<(2*n)-(2*i);j++)
        printf(" ");
        for(j=0;j<2*i-1;j++)
        printf("S");
        for(j=0;j<(2*n)-(2*i);j++)
        printf(" ");
        for(j=0;j<2*i-1;j++)
        printf("S");

        printf("\n");}

    for(i=n-1;i>0;i--){
        for(j=0;j<2*i-1;j++)
        printf("S");
        for(j=0;j<(2*n)-(2*i);j++)
        printf(" ");
        for(j=0;j<2*i-1;j++)
        printf("S");
        for(j=0;j<(2*n)-(2*i);j++)
        printf(" ");
        for(j=0;j<2*i-1;j++)
        printf("S");

        printf("\n");}
    
    return 0;
}