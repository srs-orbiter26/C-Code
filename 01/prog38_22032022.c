// C Programme to enter the score of eleven players and find their average score

#include<stdio.h>

int main(){
    
    int score,sum_score=0,i=1;
    float avg_score;

    repeat:
    printf("Enter the score of player %d: ", i);
    scanf("%d",&score);
    sum_score+=score;
    i++;
    if(i<=11) goto repeat;

    avg_score=sum_score/11.0;
    printf("The total score of eleven players is %d with the average of %f for eleven players.",sum_score,avg_score);
    return 0;
}