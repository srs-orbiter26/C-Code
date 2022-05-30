// C Programme to count number of a particular character

#include<stdio.h>
#include<string.h>

int main(){
    
    char a[100];
    char b;
    int count=0;

    printf("Enter the string: ");
    gets(a);
    printf("Enter the character: ");
    scanf(" %c",&b);

    for(int i=0;a[i]!='\0';i++){
        if(a[i]==b){
            count++;
        }
    }

    printf("The number of %c in %s is %d.",b,a,count);
    return 0;
}