#include <stdio.h>  
int main()  
{  
    int num, temp, rem, count, fact, sum = 0;  
  
    printf("Enter a number : ");  
    scanf("%d", &num);  
  
    temp = num;  
  
    while(num)  
    {  
        rem = num % 10;  
  
        count = 1;  
        fact  = 1;  
        while(count <= rem)  
        {  
            fact = fact * count;  
            count++;  
        }  
  
        printf("Factorial of %d is %d\n", rem, fact);  
  
        sum = sum + fact;  
  
        num = num / 10;  
    }  
  
    if(temp == sum)  
    {  
        printf("%d is a strong number\n", temp);  
    }  
    else  
    {  
        printf("%d is not a strong number\n", temp);  
    }  
  
    return 0;  
}  