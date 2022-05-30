// C Programme copying a structure

#include<stdio.h>

struct employee{
    char name[100];
    int age;
    float salary;
};

int main(){
    struct employee e1={"Sanjay",30,55.50};
    struct employee e2;

    //e2.age=e1.age;
    //e2.salary=e1.salary;
    e2=e1; // will copy the char,int and float
    printf("%s %d %f",e2.name,e2.age,e2.salary);
    // if we want to copy any string: strcpy(e2.name,e1.name);
    return 0;
}