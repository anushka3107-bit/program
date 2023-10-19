#include<conio.h>
#include<stdio.h>

void swap(int*,int*);
void main()
{
   int a,b;
   printf("enter the two values\n");
   scanf("%d%d",&a,&b);
   swap(&a,&b);
   printf("swapped numbers are:\n",a,b);
   getch();

}
void swap(int*x,int*y)
{

   int t;
   t = *x;
   *x = *y;
   *y = t;














}
