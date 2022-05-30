// C Programme to design library

#include<stdio.h>
#include<string.h>

void bubbleSort(int *arr,int n){
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1-j;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}

struct library{
    int acc;
    char name[100];
    char aut[100];
    int price;
    int flag;
};
int main(){
    
    struct library book[100];

    int choose,exit=0;
    int count=0;
    while(exit!=1){
        printf("1. Add Book Information.\n2. Display book information.\n3. List all the books of the given author.\n4. List the title of specified book.\n5. List total number of books present in the library.\n6. List the books in the accession number.\n7.Exit.\n");
        scanf("%d",&choose);

        switch(choose){
            case 1:
                printf("Welcome to the Library\n");
                scanf("%d %s %s %d %d",&book[count].acc,book[count].name,book[count].aut,&book[count].price,&book[count].flag);
                count++;
            break;

            case 2:
                for(int i=0;i<count;i++){
                    printf("%d %s %s %d %d\n",book[i].acc,book[i].name,book[i].aut,book[i].price,book[i].flag);
                }
            break;

            case3:
                char author[100];
                printf("Enter the name of the author: \n");
                scanf("%s",&author);

                for(int i=0;i<count;i++){
                    if(strcmp(book[i].aut,author)==0){
                        printf("%d %s %s %d %d\n",book[i].acc,book[i].name,book[i].aut,book[i].price,book[i].flag);
                    }
                }
            break;

            case 4:
                char title[100];
                printf("Enter the name of the author: \n");
                scanf("%s",&title);

                for(int i=0;i<count;i++){
                    if(strcmp(book[i].name,title)==0){
                        printf("%d %s %s %d %d\n",book[i].acc,book[i].name,book[i].aut,book[i].price,book[i].flag);
                    }
                }
            break;

            case 5:
                printf("The number of books present in the library is %d.\n",count);
            break;

            case 6:
            int ac[100];
                for(int i=0;i<count;i++){
                        ac[i]=book[i].acc;
                    
                }
                bubbleSort(&ac,count);
                for(int j=0;j<count;j++){
                    for(int k=0;k<count;k++){
                        if(ac[j]==book[k].acc){
                             printf("%d %s %s %d %d\n",book[k].acc,book[k].name,book[k].aut,book[k].price,book[k].flag);
                        }
                    }
                }
            break;

            case 7:
                exit=1;
            break;

            default:
                printf("You have entered a wrong choice.\n");
                break;
        }
       
        
    }
    return 0;
}