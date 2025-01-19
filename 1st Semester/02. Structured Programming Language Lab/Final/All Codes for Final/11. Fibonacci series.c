#include <stdio.h>
int main()
{
    int n;
    printf("Enter how many fibonacci numbers you want to generate : ");
    scanf("%d", &n);
    
    int fib[100];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 0; i < n; i++)
    {
        printf("%d ", fib[i]);
        fib[i+2] = fib[i+1] + fib[i];
    }
}