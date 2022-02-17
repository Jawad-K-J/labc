#include<stdio.h>
int main()
{
int arr[30];
int key,i,flag = 0,n;
printf("\n enter the size of the array:");
scanf("%d",&n);
printf("\n enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter element to search\n");
scanf("%d",&key);
for(i = 0; i < n; i++)
{
if(arr[i] == key)
{
flag = 1;
break;
}
}
if(flag == 1)
printf("Search Found\n");
else
printf("Search Not Found\n");
return 0;
}
