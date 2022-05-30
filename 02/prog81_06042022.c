// C Programme to calculate marks using arrays

#include <stdio.h>

int main()
{

    float avg, sum = 0, marks[20];
    int i, count = 0;

    for (i = 0; i < 20; i++)
    {
        printf("Enter Marks of %d student: ", i + 1);
        scanf("%f", &marks[i]);
    }
    for (i = 0; i < 20; i++)
    {
        sum = sum + marks[i];
        if (marks[i] > 89)
            count++;
    }
    avg = sum / 20;
    printf("The average marks of the class is %.2f.\n", avg);
    printf("The number of students who scored O grade are %d.", count);
    return 0;
}