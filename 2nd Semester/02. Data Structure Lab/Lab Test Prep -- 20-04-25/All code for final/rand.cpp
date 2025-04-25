#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int i,a[100],item,loc=0,n;
    printf("Enter No. of Elements:");
    scanf("%d",&n);
    srand(time(NULL));
    for(i=1;i<=n;i++)
    {
	a[i]=rand()%100;
	printf("\n%d",a[i]);
    }

	return 0;
}
