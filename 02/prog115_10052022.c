// C Programme to copy source string to destination string

#include<stdio.h>

int main(){
    
    char src[100],dst[100];
    int i;

    printf("Enter the source string: ");
    scanf("%s",src);

    for(i=0; src[i]!='\0'; i++){
        dst[i]=src[i];
    }
    dst[i]='\0';
    
    printf("The destination string is: %s",dst);
    return 0;
}