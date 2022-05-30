// C Programme to find the starting index of maximum 1's consecutive

#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int n,*ptr,count=0,max=0,d=0,newi=0;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
    }

    for(int i=0;i<n;i++){
        if(*(ptr+i)==1){

            count++;
        }
        if(*(ptr+i)==0){
            //newp=i-1;
            if(count>max){
                max=count;
                count = 0;
                newi=i;
                d=i-max;
            }
        }
        
        
    }

    printf("The maximum number of 1's are present from index number %d to %d",d,newi-1);
    return 0;
}