//Array input & Output
#include <stdio.h>
#include<time.h>
#include <stdlib.h>
int main()
{
	int a[100], i, n;
	printf("\nEnter No. Of Elements:");
scanf("%d",&n);

printf("\nEnter List:");
for(i=0;i<n;i++)
  {
  printf("\na[%d]:",i);
  scanf("%d",&a[i]);
  }
srand(time(NULL));
    for(i=0;i<n;i++)
        {
        a[i]=rand()%100;
        }

printf("\nGiven List:\n");
for(i=0;i<n;i++)
        {
        printf("\na[%d]=%d",i,a[i]);
        }

	return 0;
}
