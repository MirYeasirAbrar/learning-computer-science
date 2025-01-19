#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a, b, c, d, r1, r2;
    printf("Enter the coefficients of the quadratic equation: a, b, c : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = (b*b) - (4*a*c);

    if(d == 0)
    {
        r1 = -b / (2*a);
        r2 = r1;
        printf("The roots are real and equal\n");
        printf("r1 = r2 = %.2lf\n", r1);
    }
    else if(d > 0)
    {
        r1 = (-b + sqrt(d)) / 2*a;
        r2 = (-b - sqrt(d)) / 2*a;
        printf("The roots are real and distinct\n");
        printf("r1 = %.2lf\n", r1);
        printf("r2 = %.2lf\n", r2);
    }
    else
    {
        double p1, p2;
        p1 = -b / (2*a);
        p2 = sqrt(abs(d)) / 2*a;
        printf("The roots are complex and distinct\n");
        printf("r1 = %.2lf - %.2lf i\n", p1, p2);
        printf("r2 = %.2lf + %.2lf i\n", p1, p2);
    }
}