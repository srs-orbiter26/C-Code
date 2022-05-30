// C Programme to determine whether the WheatStone bridge is balanced or not

#include<stdio.h>

int main(){
    
    float P,Q,R,S;
    printf("Enter the value of four resistances in order of P,Q,R,S: ");
    scanf("%f %f %f %f",&P,&Q,&R,&S);

    if(P*S==R*Q){
        printf("The WheatStone bridge is balanced");
        return 0;
    }
    printf("The WheatStone bridge is not balanced.\n");
    S=(R*Q)/P;
    printf("The required value of S to balance the WheatStone bridge is %f", S);
    return 0;
}