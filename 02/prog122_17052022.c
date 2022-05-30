// C Programme using structure

#include<stdio.h>

struct book{
    char title[25];
    char author[15];
    float price;
    int pages;
};
int main(){
    struct book b1={"Basic c","K.Riche",130.50,550};
    struct book b2={"Math","V Rathod",155.00,800};
    printf("%s %s %f %d\n",b1.title,b1.author,b1.price,b1.pages);
    printf("%s %s %f %d",b2.title,b2.author,b2.price,b2.pages);
    return 0;
}