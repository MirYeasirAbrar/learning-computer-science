#include <stdio.h>
int main()
{
    int num, sum = 0, temp, rem;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while(temp !=0)
    {
        rem = temp % 10;
        sum = sum*10 + rem;
        temp = temp / 10;
    }
    if(sum == num)
    {
        printf("%d is a palindrome.", num);
    }
    else
    {
        printf("%d is not a palindrome.", num);
    }
}