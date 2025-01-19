#include <stdio.h>
int main()
{
    int matrix[3][3];
    printf("Enter the element of the matrix -\n");
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            printf("Enter element at [%d][%d] : ", row, col);
            scanf("%d", &matrix[row][col]);
        }
        printf("\n");
    }

    printf("The entered matrix is -\n");
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
}