#include <stdio.h>
int main(){

    int n, sum, max, min;
    int num[100];
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    
    printf("Enter your numbers: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    max = num[0];
    for(int i = 0; i < n; i++)
    {
        if(max < num[i])
        {
            max = num[i];
        }
    }
    printf("Maximum number of numbers is %d.\n", max);

    min = num[0];
    for(int i = 0; i < n; i++)
    {
        if(min > num[i])
        {
            min = num[i];
        }
    }
    printf("Minimum number of numbers is %d.\n", min);

    sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + num[i];
    }
    printf("Sum of all numbers is %d.\n", sum);
    return 0; 

}