#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int(*a)[5];
    //printf("Enter number of rows: ");
    //scanf("%d",&n);
    a=(int(*)[5])malloc(30*sizeof(int));
    for(int i=0;i<6;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<6;i++){
        int sum=0;
        for(int j=0;j<5;j++){
            sum=sum+a[i][j];
        }
        printf("%d\n",sum);
    }
    return 0;
}