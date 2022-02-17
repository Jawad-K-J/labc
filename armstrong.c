#include<stdio.h>
void main()
{
int num, r, sum, temp;
sum = 0;
printf("enter the number:");
scanf("%d",&num);
temp = num;
while(num>0)
{
r = num%10;
sum = sum+(r*r*r);
num = num/10;
}
if(temp==sum)
{
printf("the number is armstrong");
}
else
{
printf("the number is not armstrong");
}
}
