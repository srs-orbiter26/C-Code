#include<stdio.h>

int main(){
    
    FILE *fp;
    char ch;
    int count=0;

    fp=fopen("prog2_22022022.c","r");

    while((ch=fgetc(fp))!=EOF){
        printf("%c",ch);

        if(ch=='n'){
            count++;
        }
    }

    fclose(fp);
    printf("\n");
    printf("Number of n present are %d.",count);
    return 0;
}