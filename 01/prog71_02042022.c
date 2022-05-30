// C Programme to find sum,average and standard deviation

#include <stdio.h>
#include <math.h>

float sum(int a, int b, int c, int d, int e)
{

    float sum = a + b + c + d + e;
    return sum;
}

float avg(int a, int b, int c, int d, int e)
{

    float avg = (a + b + c + d + e) / 5;
    return avg;
}

float sd(int a, int b, int c, int d, int e)
{

    float sum = a + b + c + d + e;
    float avg = (a + b + c + d + e) / 5;
    a -= avg;
    b -= avg;
    c -= avg;
    d -= avg;
    e -= avg;
    float f = a * a + b * b + c * c + d * d + e * e;
    float g = sqrt(f / 4);
    return g;
}
int main()
{

    int a, b, c, d, e;
    float f, g, h;
    printf("Enter the five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    f = sum(a, b, c, d, e);
    g = avg(a, b, c, d, e);
    h = sd(a, b, c, d, e);
    printf("The sum of given numbers is %.2f\n", f);
    printf("The average of given numbers is %.2f\n", g);
    printf("The standard deviation of given numbers is %.2f", h);

    return 0;
}