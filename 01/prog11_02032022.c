#include<stdio.h>
int main()
{
    int a=10, b=5;
    int p;
    p=b++ + --a;
    printf("The value of p is %d\n", p);
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);



    return 0;
}