// C Programme to find gross salary

#include<stdio.h>

struct employee{
    char name[25];
    char g;
    char designation[100];
    char department[100];
    float bp;
    
};
int main(){
    int n;
    printf("Enter the no of employees: ");
    scanf("%d",&n);

    struct employee b[n];

    for(int i=0;i<n;i++){
        scanf("%s %c %s %s %f",b[i].name,&b[i].g,b[i].designation,b[i].department,&b[i].bp);
    }
    float hr=0,da=0;
    for(int i=0;i<n;i++){
        hr=0.25*b[i].bp;
        da=0.75*b[i].bp;
        printf("%.2f\n",b[i].bp+hr+da);
    }
   
    return 0;
}