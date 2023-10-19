#include<conio.h>
#include<stdio.h>
int add(void);
int main()
{
clrscr();
int s;
s = add();
printf("the sum is %d",s);


}





int add()
{
 int a,b,c;
 printf("enter the two numbers");
 scanf("%d%d",&a,&b);

 c= a+b;
 return(c);



}
