/* srand() function creates random value everytime and stores it
 within the index. If program runs multiple times it will 
 show different number everytime. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int array[100], n;
    printf("Enter the number random input want to generate: ");
    scanf("%d", &n);

    srand(time(NULL));

    for(int i=0; i <= n; i++)
    {
        array[i] = rand() % 100; // maximum 2 digit number
        printf("\nIndex[%d] = %d", i, array[i]);
    }


    return 0;
}