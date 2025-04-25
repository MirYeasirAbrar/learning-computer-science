#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
	int a[100], i,n, item,loc,e;
printf("\nEnter No. Of Elements:");
scanf("%d",&n);
printf("\nEnter List:");
for(i=1;i<=n;i++)
{
 printf("\na[%d]:",i);
  scanf("%d",&a[i]);
}
/*srand(time(NULL));
    for(i=1;i<=n;i++)
        {
        a[i]=rand();
        printf("\na[%d] = %d",i,a[i]);
        }*/
for(;;)
 {

printf("\nEnter Inserting Location:");
scanf("%d",&loc);
printf("\nEnter Inserting Item:");
scanf("%d",&item);
//Shifting
    for(i=n;i>=loc;i--)
        {
            a[i+1]=a[i];
        }
 //insert
a[loc]=item;
n=n+1;
//display
printf("\nList after Insert:\n");
        for(i=1;i<=n;i++)
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
