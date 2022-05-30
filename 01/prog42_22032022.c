// C Programme to find out the topper

#include<stdio.h>

int main(){
    
    int count=1;
    int rollno;
    float avg, max=0.0;
    int a, b, c, d, e;


    while(count<9){
        printf("Enter the marks of student %d for five subjects: ", count);
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        avg=(a+b+c+d+e)/5.0;
        if(avg>=0 && avg>max){
            max=avg;
            rollno=count;
        }
        count++;
    }
    printf("The average maximum marks is %f of roll number %d",max,rollno);

    return 0;
}