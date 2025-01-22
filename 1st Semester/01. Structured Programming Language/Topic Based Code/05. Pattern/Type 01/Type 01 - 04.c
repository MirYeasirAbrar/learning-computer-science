#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int row = 1; row <= n; row++)
    {
        for(int col = 1; col <= row; col++)
            printf("* ");
            printf("\n");
    }
            
}