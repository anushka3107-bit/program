#include<stdio.h>
int main()
{
  int a ,b;
  a = 10;
  b = 20;

  printf("\n*$*$*$*$*$*$*$*$*$\n");


  printf("before swap a= %d b=%d" ,a,b);


  a = a+b;
  b = a-b;
  a = a-b;


  printf("\n after swap a= %d b= %d", a,b);

  return 0;


}
