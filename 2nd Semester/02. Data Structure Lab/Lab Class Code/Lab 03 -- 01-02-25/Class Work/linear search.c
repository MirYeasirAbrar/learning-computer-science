#include <stdio.h>
int main()
{

    int i, loc, n,c;
    float a[50], item;
    printf("No of Element:");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {

        printf("\na[%d]=", i);
        scanf("%f", &a[i]);

    }
    for(;;)
    {
        loc = -1;
        printf("Item:");
        scanf("%f", &item);

        for(int i=0;i<n;i++)
        {

            if(item==a[i])
            {
                loc = i;
                break;
            }
        }
        if(loc == -1)
        {
            printf("\nabsent");
        }
        else
        {
            printf("\n%f found in %d position.", item, loc);
        }
        printf("Press 0 to exit, anything else to continue");
        scanf("%d", &c);
        return 0;
    }
    return 0;
}
