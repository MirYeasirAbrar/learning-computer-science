#include  <stdio.h>
int main()
{
    int n1, m1;
    printf("Enter the nuber of rows and columns : ");
    scanf("%d %d",&n1,&m1);

    int matrix1[n1][m1];
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<m1; j++)
        {
            printf("Enter Matrix[%d][%d] : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
        printf("\n");
    }

    int diagonal_sum = 0, upper_sum = 0, lower_sum = 0;

    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < m1; j++)
        {
            if(i == j)
            {
                diagonal_sum = diagonal_sum + matrix1[i][j];
            }
            else if(i < j)
            {
                upper_sum = upper_sum + matrix1[i][j];
            }
            else
            {
                lower_sum = lower_sum + matrix1[i][j];
            }
        }
    }

    for(int i = 0; i <n1; i++)
    {
        for(int j = 0; j < m1; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Sum of diagonal elements : %d\n", diagonal_sum);
    printf("Sum of upper triangular elements : %d\n", upper_sum);
    printf("Sum of lower triangular elements : %d\n", lower_sum);
}