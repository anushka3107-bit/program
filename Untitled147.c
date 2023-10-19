#include<stdio.h>
#include<conio.h>
int main()
{
int arr[3][4] = {2,4,7,8,9,44,56,3,24,89,90,74} ;
int i,j;
for(i = 0;i < 3;i++)
{
for(j = 0;j < 4;j++)
{
printf("%d\n" ,arr[i][j]);
}
printf("\n");
}
return 0;
}
