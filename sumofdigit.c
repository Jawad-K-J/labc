#include<stdio.h>
void main()
{
int num, r, s;
printf("enter a number:");
scanf("%d",&num);
while(num>10)
{
s=0;
while(num>0)
{
 r=num%10;
s=s+r;
num=num/10;
}
num=s;
}
printf("sum=%d",s);
}
