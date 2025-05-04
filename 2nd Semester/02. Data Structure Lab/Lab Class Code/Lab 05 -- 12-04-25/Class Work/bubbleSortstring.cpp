#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	int i, j,n;
	char word[100][100],temp[100];
	printf("Enter Number of words");
	scanf("%d",&n);
	printf("\nEnter %d word:", n);
	for(i=1;i<=n;i++)
    {
        printf("\nWORD[%d]:",i);
        scanf("%s",word[i]);
    }
//Sorting
for(j=1;j<=n-1;j++)//control passes
{
    for(i=1;i<=n-j;i++)//comparison and interchange
    {
      if(strcmp(word[i],word[i+1])>0)
      {
          //interchange
                strcpy(temp,word[i]);//temp=a[i];
                strcpy(word[i],word[i+1]);//a[i]=a[i+1];
                strcpy(word[i+1],temp);//a[i+1]=temp;
      }
    }
}
printf("\nSorted List:\n");
for(i=1;i<=n;i++)
{
    printf("\nWORD[%d]: %s",i,word[i]);
}
	return 0;
}














/*int  i,j, n;
	char a[20][30],temp[30];
	printf("\nEnter No. Of Elements:");
scanf("%d",&n);
printf("\nEnter List:\n");
for(i=1;i<=n;i++)
{
        printf("\nword[%d]: ",i);
        scanf("%s",a[i]);
}


printf("\n");
for(i=1;i<=n;i++)
{
 printf("%5s",a[i]);
}

//sorting Process
for(j=1;j<=n-1;j++)
{
    printf("\nPass %d:\n",j);
        for(i=1;i<=n-j;i++)
        {
            if(strcmp(a[i],a[i+1])>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[i+1]);
                strcpy(a[i+1],temp);
            }
           for(int k=1;k<=n;k++)
           {
            printf("%s    ",a[k]);
            }
            printf("\n");
        }


}
printf("\nSorted List:");

for(i=1;i<=n;i++)
{
 printf("\na[%d]=%s",i,a[i]);
}*/
