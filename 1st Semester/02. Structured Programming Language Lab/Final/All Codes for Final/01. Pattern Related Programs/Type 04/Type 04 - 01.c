#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int row = 1; row <= n; row++)
    {
        for(int space = n; space > row; space--)
           {
            printf("  ");
           }

        for(int col = 1; col <= row; col++)
           { 
           printf("%d ", col);
           }
           printf("\n");
    }
}