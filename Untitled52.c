#include<conio.h>
#include<stdio.h>
int factorial(int);
int main()
{

   int a,fact;


   printf("enter any number");
   scanf("%d",&a);


   fact = factorial(a);
   printf("factorial is: = %d\n,",fact);
   return 0;


}

int factorial(int x)
{

  int f = 1,i;
  for(i=x;i<= 10;i++)
  f=f*i;
  return(i);


}
