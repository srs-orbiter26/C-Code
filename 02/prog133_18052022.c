// C Programme to pass the address of a structure variable to a function

#include<stdio.h>

struct book{
    char name[25];
    char author[25];
    int cost;
};

void display(struct book *p){
    printf("%s %s %d",p->name,p->author,p->cost);
}
void main(){
    
    struct book b={"Let Us C","YPK",100};
    display(&b);
}