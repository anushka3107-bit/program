#include<stdio.h>
char* reverse(char*);
int main()
{
clrscr();
printf("%d",reverse("computer"));
getch();
}
char* reverse(char*p)
{
int l,i;
char ch;
for(l=0;*(p+l)!=0;l++)
for(i=0;i<l/2;i++)
{
ch = *(p+l);
*(p+l) = *(p+l-i-1);
*(p+l-i-1) = ch;
}
return (p);
}
