#include<stdio.h>
void matrixadd();
void matrixmul();
void symmetric();
void main()
{
int c;
printf("1.MATRIX ADDITION  2.MATRIX MULTIPLICATION  3.SYMMETRIC OR NOT\n");
scanf("%d",&c);
do{
if(c==1)
    matrixadd();
else if(c==2)
	matrixmul();
else 
	symmetric();
printf("do you want to conitue:");
scanf("%d",&c);
}while(c>3);
}

void matrixadd()
{
	int m,n,a[20][20],i,j,m2,n2;
	int b[20][20],c[20][20];
	printf("Enter the size of the first matrix:");
	scanf("%d %d",&m,&n);
	printf("Enter the size of the second matrix");
	scanf("%d %d",&m2,&n2);
	if((m==m2)&&(n==n2))
	{
		printf("ENter the elements of first matrix:");
		for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
		{
		  scanf("%d",&a[i][j]);
		}
		}

		printf("Elements first matrix:");
		for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
		{
		  printf("%d",a[i][j]);
		}
		printf("\n");
		}

		printf("ENter the elements of second matrix:");
		for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
		{
		  scanf("%d",&b[i][j]);
		}
		}
		printf("Elements second matrix:");
		for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
		{
		  printf("%d",b[i][j]);
		}
		printf("\n");
		}
		


		 for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
					{
						c[i][j]=a[i][j]+b[i][j];
					}
			}

		printf("Elements after adding:");
		for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
		{
		  printf("%d",c[i][j]);
		}
		printf("\n");
		}
	}

}	

void matrixmul(){
int m,n,a[20][20],i,j,m2,n2;
	int b[20][20],c[20][20];
	printf("Enter the size of the first matrix:");
	scanf("%d %d",&m,&n);
	printf("Enter the size of the second matrix");
	scanf("%d %d",&m2,&n2);
	if((m==n2)
	{
		printf("ENter the elements of first matrix:");
		for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
		{
		  scanf("%d",&a[i][j]);
		}
		}

		printf("Elements first matrix:");
		for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
		{
		  printf("%d",a[i][j]);
		}
		printf("\n");
		}

		printf("ENter the elements of second matrix:");
		for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
		{
		  scanf("%d",&b[i][j]);
		}
		}
		printf("Elements second matrix:");
		for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
		{
		  printf("%d",b[i][j]);
		}
		printf("\n");
		}
		for(i=0;i<m;i++)
		
}
void symmetric(){
}			
