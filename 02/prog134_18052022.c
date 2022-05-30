// C Programme to display the name of oldest lady and gents using structure

#include<stdio.h>

struct sort{
    char name[20];
    char s;
    int age;
};
int main(){
    
    int n,ml=0,fl=0,mi=0,fi=0;
    scanf("%d",&n);
    struct sort *ptr,p[n];

    ptr=p;
    for(int i=0;i<n;i++){
        printf("Enter the details: ");
        scanf("%s %c %d",(ptr+i)->name,&(ptr+i)->s,&(ptr+i)->age);
    }

    for(int i=0;i<n;i++){
        if((ptr+i)->s=='M'||(ptr+i)->s=='m'){
            if((ptr+i)->age>ml){
                ml=(ptr+i)->age;
                mi=i;
            }
        }
    }

    for(int i=0;i<n;i++){
        if((ptr+i)->s=='F'||(ptr+i)->s=='f'){
            if((ptr+i)->age>fl){
                fl=(ptr+i)->age;
                fi=i;
            }
        }
    }

    printf("The oldest gents's age is %d with name %s.\n",ml,(ptr+mi)->name);
    printf("The oldest lady's age is %d with name %s.\n",fl,(ptr+fi)->name);
    return 0;
}