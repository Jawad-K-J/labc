#include<stdio.h>
void main( )
{
int a[12][12],transpose[12][12];
int i,j,m,n,flag=1;
printf("Enter the number of rows and columns of matrix\n"); scanf("%d%d",&m,&n);
printf("Enter the elements of the matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("The matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
//To find transpose
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
transpose[j][i]=a[i][j];
}
}
printf("The transpose matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d\t",transpose[i][j]);
}
printf("\n");
}
if(m==n)
{
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]!=transpose[i][j])
{
flag=0;
break;
}
}
if(flag==0)
{
printf("\nThe matrix is not symmetric");
break;
}
} if(flag==1)
{printf("\nThe matrix is symmetric");
}
}
else
{ printf("\nThe matrix is not symmetric"); }
}
