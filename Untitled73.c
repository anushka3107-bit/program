#include<conio.h>
#include<stdio.h>
int main()
{

   int i,n,s = 0;

   printf("enter the natural numbers :\n");

   scanf("%d",&n);

   for(i = 1;i <= n;++i)

   {

    s  += i;

   }


   printf("sum of natural numbers is : %d",s);


   return 0;







}
