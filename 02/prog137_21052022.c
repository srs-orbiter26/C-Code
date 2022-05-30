// C  Programme to add elements in a 2-d array using dynamic memory allocation 

#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int n,i,j,sum=0;
    int (*a)[5];
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    a=(int(*)[5])malloc(n*5*sizeof(int));
    for(i=0;i<n;i++){
        for(j=0;j<5;++j){
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}