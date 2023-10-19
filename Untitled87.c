/*sum of square terms */
#include<conio.h>
#include<stdio.h>
int main()
{
    int sum = 1,n,i;

    printf("enter the value of n:\n");

    scanf("%d",&n);

    for(i= 1;i<= n;i++)

    sum = sum*i*i;

    printf("sum of square term is :%d\n",sum);

    return 0;








}
