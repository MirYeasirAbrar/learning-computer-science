#include <stdio.h>
int main()
{
    // Sum of digit of an integer
    int num, sum = 0, temp, rem;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Extract each digit from the number
    temp = num;
    while(temp!=0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }
    
    printf("Sum of digits: %d\n", sum);

}