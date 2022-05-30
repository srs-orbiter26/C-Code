#include<stdio.h>
int main()
{
    int a=20, b=6;
    int p,q;
    p= --a -b;
    printf("The value of p is %d.\n", p);
    printf("The value of a is %d.\n", a);
    printf("The value of b is %d.\n\n", b);

    q= --p + p;
    printf("The value of p is %d.\n", p);
    printf("The value of a is %d.\n", a);
    printf("The value of b is %d.\n", b);
    printf("The value of q is %d.\n", q);


    return 0;
}