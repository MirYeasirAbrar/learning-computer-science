#include <stdio.h>
int main(){
    int n, item; 
    printf("Enter number of element: ");
    scanf("%d ",&n);
   int a[n];
   
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter search item : ");
    scanf("%d", &item);
        int beg = 0, end = n-1;
        int mid = beg+end / 2;

        while(beg <= end){
            if(a[mid] == item){
                printf("%d is found in %d\n", item, mid);
                break;
            }
            else if(a[mid] > item) {
                end = mid - 1;
            }
            else{
                beg = mid + 1;
            }
            mid = beg+end / 2;
        }

        if(beg>end){
        printf("%d is not found\n", item);
        }

return 0;
}