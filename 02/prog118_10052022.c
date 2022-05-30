// C Programme to concatenate two strings

#include<stdio.h>

int length(char *s){
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        count++;
    }

    return count;
}
int main(){
    
    char s1[100],s2[100];
    int j;
    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);

    j=length(s1);
    s1[j++] = ' ';

    for(int i=0;s2[i]!='\0';i++){
        s1[j++]=s2[i];
    }
    s1[j]='\0';

    printf("%s",s1);

    return 0;
}