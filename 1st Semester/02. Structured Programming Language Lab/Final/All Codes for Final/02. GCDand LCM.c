#include <stdio.h>
int main()
{
    int num1, num2, n1, n2, rem, gcd, lcm;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    num1 = n1;
    num2 = n2;
    while (n2!= 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;
    
    lcm = (num1 * num2) / gcd; 
    
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}