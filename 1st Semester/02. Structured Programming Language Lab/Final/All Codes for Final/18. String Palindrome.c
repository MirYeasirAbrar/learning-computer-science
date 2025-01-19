#include <stdio.h>
#include <string.h>
int main()
{
    char str1[30] ="madam";
    char str2[30];
    int i=0;
    while(str1[i]!='\0')
    {
        i++;
    }

    int j = 0;
    int index = i - 1;
    while(index >= 0)
    {
        str2[j] = str1[index];
        j++;
        index--;
    }
    str2[j] = '\0';

    int d = strcmp(str1, str2);
    if(d == 0)
    {
        printf("The string is palindrome\n");
    }
    else
    {
        printf("The string is not palindrome\n");
    }
}