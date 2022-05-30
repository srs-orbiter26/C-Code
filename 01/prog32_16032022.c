// C Programme to find the gross salary

#include<stdio.h>

int main(){
    
    float bs, hra, da, gs;
    printf("Enter the Basic Pay in Dollar: ");
    scanf("%f", &bs);

    if(bs<1500){
        hra=bs/10;
        da=(bs*40)/100;
    }
    else {
        hra=500;
        da=bs/2;
    }
    printf("The HRA you are receiving is %f.\n", hra);
    printf("The DA you are receiving is %f.\n", da);
    printf("The Total Gross Salary you are receiving is %f.\n",bs+hra+da);
    return 0;
}