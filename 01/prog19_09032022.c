// C Programme to compute equivalent resistances and current

#include<stdio.h>

int main(){
    int r1, r2, r3, voltage, rs;
    float is, t, rp, ip;
    printf("Enter the value of resistances: ");
    scanf("%d %d %d", &r1, &r2, &r3);
    printf("Enter the value of Voltage in Volts: ");
    scanf("%d", &voltage);
    rs= r1+r2+r3;
    is= (float)voltage/rs;
    t= (float)1/r1 + (float)1/r2 + (float)1/r3;
    rp= 1/t;
    ip= voltage/rp;
    printf("The value of equivalent resistance in series is %d.\n",rs);
    printf("The value of current when resistors are in series is %f.\n",is);
    printf("The value of equivalent resistance in parallel is %f.\n",rp);
    printf("The value of current when resistors are in parallel is %f.\n",ip);
    return 0;
}