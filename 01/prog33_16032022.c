// C Programme to know whether the given three points form a triangle or not

#include<stdio.h>

int main(){
    
    int x1,y1,x2,y2,x3,y3,m1,m2,m3;
    printf("Enter the x and y coordinates of point1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the x and y coordinates of point2: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the x and y coordinates of point3: ");
    scanf("%d %d", &x3, &y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    m3=(y1-y3)/(x1-x3);

    if(m1!=m2 && m2!=m3 && m3!=m1){
        printf("These are points of a triangle.");
    }
    else{
        printf("These are not the points of a triangle.");
    }
    return 0;
}