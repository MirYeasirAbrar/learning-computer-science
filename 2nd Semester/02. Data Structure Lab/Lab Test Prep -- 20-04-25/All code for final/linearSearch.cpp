#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <string.h>
int main()
{
    int i,loc=0,n;
    int a[50],item, c;
    printf("Enter No. of Elements:");
    scanf("%d",&n);
   srand(time(NULL));
    for(i=0;i<n;i++)
        {
        a[i]=rand();
        printf("\na[%d]= %d",i,a[i]);
        }
 /*for(i=1;i<=n;i++)
        {
             printf("\na[%d]=  ",i);
        scanf("%d",&a[i]);

        }*/
for(;;)
{
    loc=-1;
printf("\nEnter Searching Item:");
scanf("%d",&item);
for (i=0;i<n;i++)
{
    if(item==a[i])
    {
        loc=i;
    break;
    }
}


if(loc==-1)
    printf("\nAbsent");
else
    printf("\nPresent at Location: %d",loc);
printf("\nDo you want to continue? \n Press 0 to exit or any value to continue: ");
scanf("%d",&c);
if(c==0)
    return 0;
}
	return 0;
}
