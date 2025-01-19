#include <stdio.h>
int main()
{
    int ara1[6]={12,11,10,5,9,36}, ara2[6];
    for(int i=0; i<6; i++)
    {
        ara2[i]=ara1[i];
    }
    for(int i=0; i<6; i++)
    {
        printf("%d ",ara1[i]);
    }
    printf("\n");
    for(int i=0; i<6; i++)
    {
        printf("%d ",ara2[i]);
    }
    return 0;
}