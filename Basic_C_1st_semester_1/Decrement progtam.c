#include<stdio.h>
int main()
{
    int a=100;
    int b=a--;
    int c=--a;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    getch();
}
