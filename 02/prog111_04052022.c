// C Programme to determine a character in giving names

#include <stdio.h>

int main()
{

    char a[] = "Yudhistir", b[] = "Bhim", c[] = "Arjun", d[] = "Nakul", e[] = "Sahadev";
    char *p[5];
    int i, j, count = 0;
    p[0] = a;
    p[1] = b;
    p[2] = c;
    p[3] = d;
    p[4] = e;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; p[i][j] != '\0'; j++)
        {
            if (p[i][j] == 'a')
            {
                count++;
            }
        }
    }
    printf("The no of a present are %d", count);
    return 0;
}