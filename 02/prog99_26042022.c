// C Programme to do sum of integers given in array

#include<stdio.h>

int main(){
    int arr[6]={5,9,8,3,0,1};
    int *b=arr;
    int s=0,i;
    for(i=0;i<6;i++){
        s=s+*(b+i);}
    printf("The sum of integers in the given array is %d",s);
    return 0;
}