#include<stdio.h>
void main ( )
{
int i=1,num=0;
int sum=0,avg=1;
printf("enter the number:");
scanf("%d",&num);

for(i=1 ; i<num ; i++)
{
sum=sum+i;
} 
printf("sum = %d",sum);
avg=sum/num;
printf("average = %d",avg);
}
