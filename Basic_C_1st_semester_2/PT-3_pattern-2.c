#include<stdio.h>
int main()
{
     int n,r,c;
     printf("Enter an integer number :");
     scanf("%d",&n);

     for(r=1;r<=n;r++)
     {
          for(c=1;c<=r;c++)
          {
               printf("%c ",c+64);
          }
          printf("\n");
     }
     for(r=n-1;r>=1;r--)           //for row match r+64
     {
          for(c=1;c<=r;c++)
          {
               printf("%c ",c+64);
          }
          printf("\n");
     }


     return 0;
}
