// C Programme to find the total amount to be distributed among friends

#include<stdio.h>

struct items{
    int cake;
    int drinks;
    int pizza;
};

struct price{
    float a;
    float b;
    float c;
};

int main(){
    int n;
    printf("Enter no of friends: ");
    scanf("%d",&n);

    struct items b[n];
    struct price e[n];
    for(int i=0;i<n;i++){
        printf("Enter the no of items: ");
        scanf("%d %d %d",&b[i].cake,&b[i].drinks,&b[i].pizza);
        printf("Enter price per item: ");
        scanf("%f %f %f",&e[i].a,&e[i].b,&e[i].c);
    }
    float sum=0;
    for(int i=0;i<n;i++){
        //printf("cake = %f",b[i].cake);
        sum += (b[i].cake*e[i].a) + (b[i].drinks*e[i].b) + (b[i].pizza*e[i].c);
        //printf("THE SUM IS :- %f",sum);
    }

    printf("The money that will be distributed in %d friends is %f",n,sum/(float)n);
    return 0;
}