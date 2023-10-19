#include<stdio.h>
#include<conio.h>
int main()
{
int arr[5] = {45,36,89,65,34};
int i = 0,j = 0,t = 0;
printf("before sorting \n");
for(i = 0;i < 5;i++)
{
printf("%d:%d\n",i,arr[i]);

}
for(i=0;i<5;i++)
{
for(j=0;j<4;j++)
{
if(arr[j]>arr[j+1])
{
t = arr[j];
arr[j] = arr[j+1];
arr[j+1] = t;
}
}
}
printf("after swapping\n");
for(i = 0;i<5;i++)
{
printf("%d :%d\n",i ,arr[i]);
}
}
