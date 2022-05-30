// C Programme to add two distances

#include<stdio.h>
int main()
{
    struct distance
    {
        int inch;
        int feet;
    };

    struct distance d[2];

    for(int i=0; i<2; i++)
    {
        scanf("%d %d",&d[i].inch, &d[i].feet);
    }

    int suminch=0, sumfeet=0;
    for(int i=0; i<2; i++)
    {
        suminch = suminch + d[i].inch;
        sumfeet = sumfeet + d[i].feet;
    }
    int newfeet=0;

    if (sumfeet > 12)
    {
        newfeet = sumfeet%10;
        suminch = suminch + sumfeet/10;
    }


    printf("Feet-inch %d-%d",suminch,newfeet);
    return 0;
}