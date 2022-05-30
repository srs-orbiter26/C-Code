// C Programme to check whether a string is palindrome or not

#include<stdio.h>

int length(char *s){
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    
    char c[100],d[100];

    printf("Enter the string: ");
    scanf("%s",c);
    int j=length(c);
    int x=0;

    for(int i=0;i<j;i++){
        d[i]=c[j-1-i];
    }

    for(int i=0;i<j;i++){
        if(c[i]!=d[i]){
            x++;
        }
    }
    if(x==0){
        printf("It is a palindrome.");
    }
    else{
        printf("It is not a palindrome.");
    }
    return 0;
}