#include <stdio.h>

void search(int n, int a[n], int item)
{
    int loc = -1;
    for (int i=0; i<n; i++){
        if(a[i] == item){
            loc = i;
            break;
        }
    } 
    if(loc == -1){
        printf("\n%d is not found", item);
    }
    else{
        printf("\n%d is found in Index[%d]", item, loc);
    }
}

int main()
{
	int a[100], i,n,item,loc,e;
printf("\nEnter No. Of Elements:");
scanf("%d",&n);
for(int i = 0; i< n; i++)
{
    sacnf("%d", a[i]);
}


for(;;)
{
printf("\nEnter Inserting Location:");
scanf("%d",&loc);
printf("\nEnter Inserting Item:");
scanf("%d",&item);
//Shifting
if(loc<n)
{
    for(i=n-1;i>=loc;i--)
        {
            a[i+1]=a[i];
        }
}
 //insert
a[loc]=item;
n=n+1;

}
	return 0;
}

