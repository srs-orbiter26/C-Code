// C Programme to display number of prime numbers and their sum

#include<stdio.h>

int main(){
    int i,sum=0,n,a,c=0;

    for(i=1;i<=10;i++){
        printf("Enter the number: ");
        scanf("%d",&n);
        int count=0;
        for(a=1;a<=n;a++){
            if(n%a==0)
                count++;
        }
        if(count==2){
            c++;
            sum+=n;
        }
    }
    printf("The number of prime numbers out of entered numbers is %d.\n",c);
    printf("The sum of those prime numbers is %d.",sum);
    return 0;
}