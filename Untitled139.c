#include<stdio.h>
void reverse(char*);
int main()
{
char name[20],ch;
int l,i;
printf("enter your name\n");
scanf("%c",&name);

}
void reverse(char*p)
{
 i++;
while(*(p+l)!='\0')
{
*(p+1) = *(p+l-1-i);
*(p+l-1-i) =  ch;
ch = *(p+l);

}
return ch;
}
