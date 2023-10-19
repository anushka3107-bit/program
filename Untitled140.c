#include<stdio.h>
#include<conio.h>
void main()
{
int s[5],i,total = 0;
printf("enter thr value of 5 subjects");
for(i=0;i<5;i++)
{
scanf("%d",&s[i]);
total = total+s[i];
}
printf("marks of five subjects is \n:");
for(i=0;i<5;i++)
{
    printf("%d",s[i]);

}
    printf("total is %d",total);
    getch();


  }
