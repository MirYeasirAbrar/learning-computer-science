#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int row = 1; row <= n; row++)
    {
        for(int col = 1; col <= row; col++)
            if(col%2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
            printf("\n");
    }

    for(int row = n-1; row >= 0; row--)
    {
        for(int col = 1; col <= row; col++)
            if(col%2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
            printf("\n");
    }
            
}