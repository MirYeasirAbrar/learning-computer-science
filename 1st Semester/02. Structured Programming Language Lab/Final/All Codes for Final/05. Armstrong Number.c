#include <stdio.h>
#include <math.h>
int main()
{
    int num, sum, temp, count = 0, rem;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    temp = num;
    while(temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    printf("Count : %d\n", count);

    temp = num;
    sum = 0;
    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, count);
        temp = temp / 10;
    }
    if(sum == num)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}