// C  Programme to add elements in a 1-d array using dynamic memory allocation 

#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int n,i,*ptr,sum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
        sum=sum+ptr[i]; //*(ptr+i)=ptr[i]

    }

    printf("Sum of elements in array: %d",sum);
    free(ptr);
    return 0;

}