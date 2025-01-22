#include <stdio.h>
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for( int row = n; row >= 1; row-- )
    {
        for(int space = n; space > row; space--)
        {
            printf("  ");
        }

        for( int col = 1; col <= row; col++ )
        {
            printf("%c ", row+64);
        }
        printf("\n");
    }
}