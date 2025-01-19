#include <stdio.h>
int main()
{
    char str[] = "Abrar";
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    printf("Length of the string is: %d", i);
}