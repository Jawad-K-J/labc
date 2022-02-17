#include<stdio.h>
void main( )
{
int arr[100],i,n,max,min;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the elements of array:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
max=min=arr[0];
for(i=0;i<n;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
if(arr[i]<min)
{
min=arr[i];
}
}
printf("Maximum no. is:%d\n",max);
printf("Minimum no. is:%d",min);
printf("\n\n");
}
