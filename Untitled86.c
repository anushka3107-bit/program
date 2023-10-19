#include<conio.h>
#include<stdio.h>
int main()
{
   int s,n,a,d;

   printf("enter the first term,common difference and the nth term:\n");

   scanf("%d%d%d",&a,&d,&n);

   s = n*(2*a+(n-1)*d)/2;

   printf("sum is :%d",s);

   return 0;







}
