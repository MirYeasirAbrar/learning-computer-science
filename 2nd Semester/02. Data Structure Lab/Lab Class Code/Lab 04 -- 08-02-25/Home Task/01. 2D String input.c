#include <stdio.h>

int main()
{
    int n;
    char word[20][20];
    printf("Number of words : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%s", word[i]);
    }

    for(int i = 0; i < n; i++)
    {
        printf("%s\n", word[i]);
    }
        
    return 0;
}