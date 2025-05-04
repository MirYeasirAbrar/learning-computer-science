/* rand() function creates random value once and stores it
 within the index. If program runs multiple time it will 
 show the same number that it once generated. */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array[100], n;

    printf("Enter the number of random input generation : ");
    scanf("%d", &n);

    for(int i=0; i <= n; i++)
    {
        array[i] = rand();
        printf("\nIndex[%d] = %d", i, array[i]);
    }    

    return 0;
}