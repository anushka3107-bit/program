#include<conio.h>
#include<stdio.h>
int main()
{

  int a,d,n,ap;

  printf("enter the first term ,common differnce,and the nth term:\n");

  scanf("%d%d%d",&a,&d,&n);

  ap = a + (n-1)*d;

  printf("series is:%d",ap);

  return 0;








}
