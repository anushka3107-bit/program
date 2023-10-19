#include<conio.h>
#include<stdio.h>
int main()
{

  int y;
  printf("enter the year:\n");

  scanf("%d",&y);

  printf("\n****************\n");

  if(y%4 == 0)

  printf("entered year is leap year\n");


  else

  printf("entered year is not a leap year\n");


  return 0;


}
