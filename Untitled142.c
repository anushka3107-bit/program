#include<stdio.h>
#include<conio.h>
int main()
{
int arr[5] = {30,67,84,54,34};
int i;
arr[2] = 68;
for(i=0;i<5;i++)
{
printf("index %d : %d\n",i ,arr[i]);
}
return 0;
}
