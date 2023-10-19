#include<conio.h>
#include<stdio.h>
int swap(int ,int);
main()
{

    int x,y;
    printf("enter the value of x\n");
    scanf("%d",&x);
    printf("enter the value of y\n");
    scanf("%d",&y);


    printf("before swapping :x=%d,y=%d",x,y);

    swap(x,y);
    return 0;
}

    int swap(int a,int b);
{


     int t;
     t = a;
     a = b;
     b = t;




 }




