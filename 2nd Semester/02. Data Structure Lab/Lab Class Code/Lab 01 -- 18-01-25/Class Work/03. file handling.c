#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fileH;
    fileH = fopen("file.txt", "r");
    
    int a[100];
    for(int i=0; i <= 5; i++)
    {
        fscanf(fileH, "%d", &a[i]);
    }

    for(int i=0; i <= 5; i++)
    {
        printf("\nIndex[%d] = %d", i, a[i]);
    }
}