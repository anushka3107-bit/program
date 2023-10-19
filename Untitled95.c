#include<conio.h>
#include<stdio.h>
void circle(int ,float *,float *);
int main()
{

 int radius;
 float area ,perimeter;

 printf("enter the value of radius\n");
 scanf("%d",&radius);
 circle(radius ,&area,&perimeter);

 printf("area =%f\n",&area);
 printf("perimeter = %f\n",&perimeter);

 return 0;


}

void circle(int r,float *a,float *p)
{

  *a = 3.14*r*r;
  *p = 2*3.14*r;









}
