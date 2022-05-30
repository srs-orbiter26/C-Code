// C Programme to display prime numbers till the entered number

#include<stdio.h>

int main(){
    
    int i,a,n;
    printf("Enter the number till which you want the prime numbers: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int count=0;
        for(a=1;a<=n;a++){
            if(i%a==0){
                count++;
            }
            
        }
        if(count==2){
            printf("%d\n",i);}
        
    }
    return 0;
}