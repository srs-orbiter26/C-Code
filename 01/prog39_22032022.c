// C Programme to enter score of 11 players and count number of players who scored century alongwith discarding negative score

#include<stdio.h>

int main(){

    int score, i=1, count=0;
    
    again:
    printf("Enter score for player %d: ",i);
    scanf("%d",&score);

    if(score<0) goto again;

    if (score/100)
      count+=score/100;
      
    i++;
    if(i<=11) goto again;

    printf("Total number of players who scored century are %d.", count);

    return 0;
}