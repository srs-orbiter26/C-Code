// C Programme to display TimePeriod of given length

#include<stdio.h>
#include<math.h>

int main(){
    
    float T1, T2, T3, T4, T5;
    printf("Length \t Time Period\n");
    T1= 2*3.14*sqrt(10/9.8);
    printf(" 10m \t  %f\n",T1);
    T2= 2*3.14*sqrt(20/9.8);
    printf(" 20m \t  %f\n",T2);
    T3= 2*3.14*sqrt(30/9.8);
    printf(" 30m \t  %f\n",T3);
    T4= 2*3.14*sqrt(40/9.8);
    printf(" 40m \t  %f\n",T4);
    T5= 2*3.14*sqrt(50/9.8);
    printf(" 50m \t  %f\n",T5);
    
    return 0;
}