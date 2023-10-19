#include<stdio.h>
char* reverse(char*);
int main()
{
 clrscr();
 printf("%s",reverse("computer"));
 getch();

}
char* reverse(char *p)
{
int i,l;
for(l=0;*(p+1)!='\0';l++);
for(i=0;i<l/2;i++)
{
char ch;
ch = *(p+l);
*(p+1) = *(p+l-1-i);
*(p+l-1-i)= ch;
}
return(p);
}
