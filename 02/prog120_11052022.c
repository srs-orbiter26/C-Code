#include<stdio.h>
#include<stdlib.h>

int length(char* a){
    int count=0;
    for(int i=0;*(a+i)!='\0';i++){
        count++;
    }
    
    return count;
}
int verify(char* p, char* a){
    int j=length(p)-1;
    int count=0;
    for(int i=0;i<j;i++){
        if(p[i]==a[count]){
            count++;
            printf("%d\n", i);

            if(p[i+1]!=a[count]&&count!=length(a)){
            count=0;
            }
        }
        
    }

    if(count==length(a)){
        return 1;
    }
    return 0;
}
int main(){
    int n=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int temp=0;
    char p[100];
    printf("Enter the Stirng:");
    scanf("%c", &temp);
    gets(p);
    p[length(p)]=' ';
    p[length(p)+1]='\0';

    char a[100]={0};
    printf("Enter the string to find: ");
    gets(a);

    int answer=verify(p, a);

    answer==1?printf("%s is found", a):printf("%s is not found", a);
    return 0;
}

