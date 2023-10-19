#include<stdio.h>
#include<conio.h>
int main()
{
char greeting[10]= {'H','E','L','L','O','\0'};
printf("%c\n", greeting[2]);
printf("%s\n",greeting);

printf("\n enter a greeting message 1 :");
scanf("%s",greeting);

printf("\n greeting message : %s",greeting);

printf("\n enter a greeting message 2 :");
scanf("%s",greeting);

printf("\n greeting message :%s",greeting);

return 0;

}
