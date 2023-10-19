#include<stdio.h>
int main()
{
char name[]= "klinsman";
int i = 0;
while(i<=7)
{
 prtintf("%c",name[i]);
 i++;


}
printf("\n");
i = 0;
while(name[i] != "\0");
{
 printf("%c",name[i]);
 i++;


}

printf("\n");



return 0;

}



