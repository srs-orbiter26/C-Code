// C Programme to check whether the lines are parallel or not

#include<stdio.h>

int main(){
    
    int a, b, c, d, e, f, g, h, m1, m2, s;
    printf("Enter the first coordinates of line1: ");
    scanf("%d %d", &a, &b);
    printf("Enter the second coordinates of line1: ");
    scanf("%d %d", &c, &d);
    printf("Enter the first coordinates of line2: ");
    scanf("%d %d", &e, &f);
    printf("Enter the second coordinates of line2: ");
    scanf("%d %d", &g, &h);
    m1=(d-b)/(c-a);
    m2=(h-f)/(g-e);
    s= m1==m2;
    printf("Checking whether the lines are parallel or not...\n");
    printf("Displaying 1 if yes or 0 if no: %d",s);
    
    return 0;
}