#include<stdio.h>
#include<conio.h>
int main()
{
int arr[5] = {20,56,19,54,43};
int i = 0 ,j = 0, temp ;
printf("brfore sorting\n");
for(i=0;i<5;i++)
{
printf("%d : %d\n",i, arr[i]);
}
for(i = 0;i<5;i++)
{
for(j = 0 ;j<4;j++)
{
if(arr[j]>arr[j+1])
{
arr[j] = arr[j+1];
arr[j+1] = arr[j];
arr[j+1] = arr[j];


}

}
}
printf("after sorting \n");
for(i= 0;i < 5;i++)
{
printf("%d: %d\n",i,arr[i]);
}
}
