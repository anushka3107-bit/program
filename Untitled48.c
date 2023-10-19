#include<conio.h>
#include<stdio.h>
int main()
{
  int a,b;
  printf("enter the value of a\n");
  scanf("%d",&a);
  printf("enter the value of b\n");
  scanf("%d",&b);


  printf("\n----------------------\n");

  printf("before swapping: a = %d b = %d",a,b);


  a = a*b;
  b = a/b;
  a = a/b;



  printf("\n after swapping:a = %d b = %d",a,b);

  return 0;


}
