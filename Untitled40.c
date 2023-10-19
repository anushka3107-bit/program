#include<conio.h>
#include<stdio.h>
int add(int,int);
main()
{
int x,y,s;
printf("enter the two values\n");
scanf("%d%d",&x,y);
s=add(x,y);
printf("sum is %d",s);



}




int add(int a,int b)
{
  int c;
  c = a+b;
  return(c);




}
