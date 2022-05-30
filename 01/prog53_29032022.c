// C Programme to display upside down right angled triangle pyramid

#include<stdio.h>

int main(){
    
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++)
        printf("S");
        for(j=0;j<i;j++)
        printf(" ");
        for(j=0;j<n-i;j++)
        printf("S");
        for(j=0;j<i;j++)
        printf(" ");
        for(j=0;j<n-i;j++)
        printf("S");
        printf("\n");
    }
    return 0;
}