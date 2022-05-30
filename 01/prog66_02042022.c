// C Programme to display maximum number

#include <stdio.h>

int count_leader(int n)
{

    int next_num, leader = 0, i, count = 0;
    for (i = 0; i < n; i++)
    {
        printf("Enter the next number: ");
        scanf("%d", &next_num);
        if (next_num > leader)
        {
            leader = next_num;
            count++;
        }
    }
    printf("Max of entered number is %d.\n", leader);
    return (count);
}
int main()
{

    int a;

    a = count_leader(10);
    printf("No of leaders are %d.", a);

    return 0;
}