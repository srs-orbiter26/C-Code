// C Programming displaying pointers

#include<stdio.h>

int main(){
    
    int a=5;
    int *b=&a;
    printf("%u\n",b);
    printf("%u",&a);
    return 0;
}