// C Programme demonstrating 1D Array

#include<stdio.h>

int main(){
    
    int a[10]={5,9,1,7,2,0,3,4,6,8};
    printf("%u\n",&a);
    printf("%u\n",*&a);
    printf("%d\n",*a);
    printf("%d\n",*(a+1));
    printf("%d\n",*(a+9));
    printf("%u\n",a);
    return 0;
}