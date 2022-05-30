// C Programme to use unions

#include<stdio.h>
#include<string.h>

union Data{
    int i;
    float f;
    char str[20];
};
int main(){
    union Data data;
    data.i=10;
    data.f=34.72;
    strcpy(data.str,"C Programming");

    printf("%d\n",data.i);
    printf("%f\n",data.f);
    printf("%s",data.str);
    return 0;
}