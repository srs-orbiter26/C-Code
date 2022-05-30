// C Programme to reverse a number and check whether it is a palindrome or not

#include <stdio.h>

int main()
{

    long int n, rev_n = 0, org_n;

    printf("Enter the number: ");
    scanf("%ld", &n);
    org_n = n;

    do
    {
        rev_n = rev_n * 10 + n % 10;
        n = n / 10;
    } while (n != 0);
    printf("Thr reverse number of entered number is %ld.\n", rev_n);

    if (org_n == rev_n)
        printf("Given number is Palindrome.");
    else
        printf("Given number is not Palindrome.");

    return 0;
}