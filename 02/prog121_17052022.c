// C Programme making use of structure

#include<stdio.h>

struct book{
        char name[20];
        float price;
        int pages;
    };

int main(){
    struct book b[2];
    //struct book b[2]={"basic c",100,20};
    printf("Enter name,price and no of pages of 2 books: \n");

    for(int i=0;i<2;i++){
        scanf("%s %f %d",b[i].name,&b[i].price,&b[i].pages);
    }
    printf("And this is what you entered: ");

    for(int i=0;i<2;i++){
        printf("\n%s %.1f %d",b[i].name,b[i].price,b[i].pages);
    }
    return 0;
}