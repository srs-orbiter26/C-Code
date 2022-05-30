// C Programme demonstrating struct and unions

#include<stdio.h>

struct a{
    int i;
    char c[2];
};

struct b{
    int j;
    char d[2];
};

union z{
    struct a key;
    struct b data;
};

int main(){
    
    union z strange;

    strange.key.i=512;
    strange.data.d[0]=0;
    strange.data.d[1]=32;

    printf("%d",strange.data.j);
    return 0;
}