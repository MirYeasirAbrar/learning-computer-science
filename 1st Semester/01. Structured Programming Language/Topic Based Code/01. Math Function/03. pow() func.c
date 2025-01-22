// evaluate power of number - pow()
#include  <stdio.h>
# include <math.h>
int main()
{
    double a, b;
    printf("Enter the number and power of number : ");
    scanf("%lf %lf", &a, &b);	
    printf("Pow value - %.3lf\n", pow(a,b));
}