// C Programme on basic if statements

#include<stdio.h>

int main(){
    
    int marks, age;
    printf("Enter the age and the initial marks: ");
    scanf("%d",&age);
    scanf("%d",&marks);

    if(age<50){
        marks=marks+60;
    }
    else
        marks=marks+40;

    printf("The entered age is %d and the marks scored is %d.",age,marks);
    return 0;
}