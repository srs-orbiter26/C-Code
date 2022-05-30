#include<stdio.h>

int main(){
    
    FILE *fp;
    int a[10]={2,4,6,8,10,12,14,16,18,20};
    fp=fopen("data.out","w");

    for(int i=0;i<10;i++){
        fprintf(fp,"%d ",a[i]);
    }
    fclose(fp);
    return 0;
}