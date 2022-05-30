#include<stdio.h>

int main(){
    
    int a=5;
    int *b=&a;
    printf("%d\n",sizeof(b));
    float c=7.3;
    float *d=&c;
    printf("%d\n",sizeof(d));
    char e='S';
    char *f=&e;
    printf("%d",sizeof(f));
    return 0;
}