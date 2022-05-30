// C Programme to convert Celsius to Fahrenheit and Kelvin

#include<stdio.h>

int main(){
     
     float f1, f2, f3, f4, f5, k1, k2, k3, k4, k5;
     printf("In Celsius \t In Fahrenheit \t    In Kelvin\n");
     f1=((20*9)/5)+32;
     k1=(20+273.15);
     f2=((40*9)/5)+32;
     k2=(40+273.15);
     f3=((60*9)/5)+32;
     k3=(60+273.15);
     f4=((80*9)/5)+32;
     k4=(80+273.15);
     f5=((100*9)/5)+32;
     k5=(100+273.15);
     printf("   20 \t \t   %f \t    %f\n",f1,k1);
     printf("   40 \t \t   %f \t    %f\n",f2,k2);
     printf("   60 \t \t   %f \t    %f\n",f3,k3);
     printf("   80 \t \t   %f \t    %f\n",f4,k4);
     printf("   100 \t \t   %f \t    %f\n",f5,k5);
    
    return 0;
}