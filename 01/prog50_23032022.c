// C Programme to display Fibonacci series

#include<stdio.h>

int main(){

	int i,n,a=0,b=1,c=a+b,d;
    printf("Enter the limit of fibonacci: ");
	scanf("%d",&n);
    printf("%d, %d,",a,b);
	for(i=2;i<n;i++){
		printf("  %d,", c);
        a=b;
        b=c;
        c=a+b;
	}
	return 0;
}