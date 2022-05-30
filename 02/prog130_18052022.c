// C Programme using array of structures

#include<stdio.h>

struct book{
    char name[20];
    float price;
    int pages;
};
int main(){
    
    
    int n;
    scanf("%d",&n);
    struct book *ptr,b[n];
    
    ptr=b;

    for(int i=0;i<n;i++){
        printf("\nEnter book name,price and pages: ");
        scanf("%s %f %d",(ptr+i)->name,&(ptr+i)->price,&(ptr+i)->pages);
        //scanf("%s %f %d",ptr[i].name,&(ptr[i].price),&(ptr[i].pages));
    }
//printf("hello");
    for(int i=0;i<n;i++){
        
        printf("\n%s %.2f %d",(ptr+i)->name,(ptr+i)->price,(ptr+i)->pages);
        //printf("\n%s %f %d",ptr[i].name,(ptr[i].price),(ptr[i].pages));
    }
    return 0;
}