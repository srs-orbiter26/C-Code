// C Programming to print KIIT University Student

#include<stdio.h>

int main(){
    
    int class;
    printf("Enter the class you are in (Enter any number greater than 12 if you are undergraduate or else enter class from 1-12): \n");
    scanf("%d", &class);
    printf("KIIT");

    if(class>12){
        printf(" University");
    }

    printf(" Student");
    
    return 0;
}