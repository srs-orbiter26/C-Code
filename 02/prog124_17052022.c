// C Programme to find average salary

#include<stdio.h>

struct employee{
    char name[25];
    char add[100];
    int age;
    float salary;
};
int main(){
    int n;
    printf("Enter the no of employees: ");
    scanf("%d",&n);

    struct employee b[n];

    for(int i=0;i<n;i++){
        scanf("%s %s %d %f",b[i].name,b[i].add,&b[i].age,&b[i].salary);
    }

    float sum=0;

    for(int i=0;i<n;i++){
        sum=sum+b[i].salary;
    }
    float avg=sum/n;

    printf("The average salary of the employees is %f.",avg);
    return 0;
}