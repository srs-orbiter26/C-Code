#include<stdio.h>

int main(){
    
    FILE *fp;
    int a[10][10],sum=0;
    fp=fopen("data1.in","r");

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            fscanf(fp,"%d",&a[i][j]);
            
        }
    }

    for(int i=0;i<10;i++){
        
            sum=sum+a[i][9];
            
    }
    fclose(fp);

    printf("The sum of last elements are %d.",sum);
    return 0;
}