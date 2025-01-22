#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of row : ");
    scanf("%d", &n);

    for(int row = n; row > 0; row--)
    {
        for(int space = n; space > row; space--)
        {
            printf("  ");
        }

        for(int col = 1; col <= row; col++)
        {
            printf("%d ", row);
        }
        printf("\n");
    }
}