#include<conio.h>
#include<stdio.h>
int main()
{

  int i,n,fact =1;

  printf("enter the number:\n");

  scanf("%d",&n);



  for(i = 1;i <= n;)
  {

   fact = fact*i;

    ++i;
  }

   printf("factorial is :%d",fact);

   return 0;

}
