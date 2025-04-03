#include<stdio.h>
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
void main()
{
int x,y;
printf("Enter the value of x\n");
scanf("%d",&x);
printf("Enter the value of y\n");
scanf("%d",&y);
printf("value of x before swapped is %d\n",x);
printf("value of y before swapped is %d\n",y);
swap(&x,&y);
printf("value of x after swapped is %d\n",x);
printf("value of y after swapped is %d\n",y);
}
