#include<stdio.h>
#include<conio.h>
int main()
{
char str[1000],ch;
int count = 0;


printf("enter a string \n");

fgets(str,sizeof(str),stdin);

printf("enter a character to find it's frequency \n");

scanf("%c",&ch);

for(int i = 0; str[i] != '\0';++i)
{

if (ch == str[i])
++count;
}

printf("the frequency of the character is %c: %d\n",ch,count );

return 0;





}
