#include<stdio.h>
int main()
{
     int n,c,r;
     printf("Enter an integer number :");
     scanf("%d",&n);

     for(r=1;r<=n;r++)
     {
          for(c=1;c<=n-r;c++)
          {
               printf(" ");
          }
          for(c=1;c<=r;c++)
          {
               printf("%d",c);
          }
          {
               for(c=r-1;c>=1;c--)
                    printf("%d",c);
          }
          printf("\n");

     }

     return 0;
}
