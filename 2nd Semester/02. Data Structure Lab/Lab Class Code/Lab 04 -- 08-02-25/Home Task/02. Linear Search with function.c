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
    int n;
    printf("Enter the number of element : ");
    scanf("%d", &n);
    
    int a[n];
    printf("\n");

    for(int i = 0; i < n; i++){
        printf("index[%d] = ", i);
        scanf("%d", &a[i]);
    }


    int item;
    printf("\nEnter the search item : ");
    scanf("%d", &item);

    search(n, a, item);
    
    return 0;
}