#include<conio.h>
#include<stdio.h>
void swap(int*,int*);
void main()
{

  int a,b;
  printf("enter two numbers\n");
  scanf("%d%d",&a,&b);
  swap(&a,&b);
  printf("swappped numbers are: a = %d b = %d\n",a,b);

}
void swap(int*x,int*y)
{
  int t;
  t  = *x;
  *x = *y;
  *y = t;





}
