// C Programme to determine the largest the number out of five given numbers

#include<stdio.h>

int main(){
    
    int a, b, c, d, e, max;
    printf("Enter five numbers to find largest number among the five: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    max=a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    if(d>max){
        max=d;
    }
    if(e>max){
        max=e;
    }

    printf("The maximum number among the given number is %d.", max);

    return 0;
}