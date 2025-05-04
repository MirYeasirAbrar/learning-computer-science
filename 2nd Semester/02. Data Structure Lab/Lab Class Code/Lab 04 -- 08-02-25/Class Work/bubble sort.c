     #include <stdio.h>
     #include <stdlib.h>
     #include <time.h>

     int main()
     {
         int a[100], temp, n;
         printf("Enter Number of Element : ");
         scanf("%d", &n);
         srand(time(NULL));
         for(int i=0; i<n;i++)
         {
             a[i] = rand()%100;
             printf("\na[%d]=%d", i, a[i]);
         }

        for(int j=1; j<=n-1; j++)
        {
            printf("\nPasses : %d\n", j);
            for(int i=0; i<n-j; i++)
            {
                if(a[i]>a[i+1])
                {
                    temp = a[i];
                    a[i] = a[i+1];
                    a[i+1] = temp;
                }
                for(int k=0; k<n; k++)
                {
                    printf("%d    ", a[k]);
                }
                printf("\n");
            }
        }
        for(int i=0; i<n; i++)
        {
            printf("\na[%d]=%d", i,a[i]);
        }
        return 0;
     }
