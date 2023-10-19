#include<conio.h>
#include<stdio.h>
int main()
{
  int n1 = 0, n2 = 1,i ,n;

  printf("enter the value of n");
  scanf("%d",&n);
  printf("%d%d",n1,n2);
  for (i=2;i<=n;i++)
{

  n = n1+n2;
  printf("%d",n);

  n1 = n2;

  n2 = n;




}


   return 0;

}
