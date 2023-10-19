#include<stdio.h>
int main()
{

 clrscr();
 printf("%s",length("computer"));
 getch();
}
char* reverse(char*p)
{
int i ,l;
for(l = 0;*(p+1)!='\0';l++);
for(i = 0;i<l/2;i++)
{
char ch;
ch = *(p+1);
*(p+1) = *(p+l-1-i);
*(p+l-1-i) = ch;
}
return(p);
}
