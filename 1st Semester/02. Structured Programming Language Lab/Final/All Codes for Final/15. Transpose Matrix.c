// Transpose MAtrix
#include <stdio.h>
int main()
{
    int n1, m1;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &n1, &m1);

    printf("Enter the elements of the matrix: \n");

    int matrix1[n1][m1];

    for (int row = 0; row < n1; row++) 
    {
        for (int col = 0; col < m1; col++)
        {
            printf("Enter element at [%d][%d]: ", row, col);
            scanf("%d", &matrix1[row][col]);
        }
        printf("\n");
    }
    for(int row = 0; row < n1; row++)
    {
        for(int col = 0; col < m1; col++)
        {
            printf("%d ", matrix1[row][col]);
        }
        printf("\n");
    }

    int matrix2[m1][n1];
    for (int row = 0; row < m1; row++)
    {
        for (int col = 0; col < n1; col++)
        {
            matrix2[col][row] = matrix1[row][col];
        }
        printf("\n");
    }

    printf("\nTranspose of the matrix:\n");
    for (int row = 0; row < n1; row++)
    {
        for (int col = 0; col < m1; col++)
        {
            printf("%d ", matrix2[row][col]);
        }
        printf("\n");
    }
}