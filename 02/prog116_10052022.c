// C Programme to find the length of the string

#include<stdio.h>

int main(){
    
    char a[100];
    int count=0;

    printf("Enter the string: ");
    gets(a);

    for(int i=0;a[i]!='\0';i++){
        count++;
    }

    printf("The length of the string is %d.",count);
    return 0;
}