#include<conio.h>
#include<stdio.h>
void main()
{
int x,y;
void add(int,int);
clrscr();
printf("enter the value of two numbers");
scanf("%d%d",&x,&y);


add(x,y);
getch();
}
void add(int a,int b)
{
int c;
c = a+b;
printf("sum is %d",c);



}
