#include<stdio.h>
void main()
{
int a[10],n=10,sum=0,i;
printf("\nEnter the 10 array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum=%d" ,sum);
}
