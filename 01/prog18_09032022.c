// C Programme to find out secondary voltage

#include<stdio.h>

int main(){
    int pt, st, pv, sv;
    printf("Enter the primary voltage: ");
    scanf("%d", &pv);
    printf("Enter the primary turns: ");
    scanf("%d", &pt);
    printf("Enter the secondary turns: ");
    scanf("%d", &st);
    sv=(pv*st)/pt;
    printf("THe secondary voltage comes out to be %d.",sv);
    return 0;
}