#include <stdio.h>
int  main()
{
    int ara[100], position,n, num;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    printf("Enter the number to search : ");
    scanf("%d", &num);

    position = -1;

    for(int i = 0; i < n; i++)
    {
        if(ara[i] == num)
        {
            position = i + 1;
            printf("%d is found in the array in position %d\n", num, position);
            break;
        }

    }
    if(position == -1)
    {
        printf("%d is not found in the array\n", num);
    }
}