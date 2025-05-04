#include <stdio.h>
int n;
void tower(int n, char bg, char ax, char ed){
    if(n==1){
        printf("\n%c -----> %c", bg, ed);
    }
    else{
        tower(n-1, bg, ed, ax);
        printf("\n%c -----> %c", bg, ed);
        tower(n-1, ax, bg, ed);   
    }
}
int main(){
        printf("Enter Number of Disc : ");
        scanf("%d", &n);
        tower(n, 'a', 'b', 'c');
return 0;
}