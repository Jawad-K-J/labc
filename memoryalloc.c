#include<stdio.h>
#include<stdlib.h>
void main()
{
int *ptr,sum=0,n,i;
printf("enter numbers of elements:");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
printf("\nmemory allocated using malloc");
printf("enter the elements of array:");
for(i=0;i<n;i++)
{
scanf("%d",ptr+i);
sum=sum+*(ptr+i);
}printf("sum=%d",sum);
free(ptr);
ptr=(int*)calloc(n,sizeof(int));
sum=0;
printf("\nmemory allocated using calloc");
printf("enter the elemntsof the second array:");
for(i=0;i<n;i++)
{scanf("%d",ptr+i);
sum=sum+*(ptr+i);
}
printf("sum=%d",sum);
printf("enter new size of second array:");
scanf("%d",&n);
sum=0;
ptr=realloc(ptr,n*sizeof(int));
printf("\nmemory allocated using realloc");
printf("\n enter the elements of second array:");
for(i=0;i<n;i++)
{scanf("%d",ptr+i);
sum=sum+*(ptr+i);
}
printf("sum=%d",sum);
free(ptr);

}
