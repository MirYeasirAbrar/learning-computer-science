#include <stdio.h>
int main()
{

    int i, loc, n,e;
    int a[50], item;
    printf("\nEnter No. Of Elements: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {

        printf("\na[%d]=", i);
        scanf("%d", &a[i]);

    }
    for(;;)
    {
        loc = -1;
        printf("\nEnter Inserting Item: ");
        scanf("%d", &item);

        for(int i=0;i<n;i++)
        {

            if(item < a[i])
            {
                loc = i;
                break;
            }
        }
       if(loc<n)
        {
            for(i=n-1;i>=loc;i--)
                {
                    a[i+1]=a[i];
                }
        }
        a[loc]=item;
        n=n+1;
        printf("\nList after Insert:\n");

        for(i=0;i<n;i++)
        {
            printf("\na[%d]=%d",i,a[i]);
        }
        printf("\nPress any value for exit and 1 for continue: ");
        scanf("%d", &e);
        if(e!=1)
        return 0;
    }
    return 0;
}

