#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n :");
    scanf("%d", &n);

    for(int row = n;row >= 1; row-- )
    {
        for(int col = 1; col <= row; col ++)
        {
            printf("%c ", col+64);
        }
        printf("\n");
    }
}