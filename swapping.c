#include<stdio.h>
void change(int,int);
void replace(int*,int*);
void main()
{
int x,y,p,s;
printf("enter the two numbers:");
scanf("%d%d",&x,&y);
change(x,y);
printf("value x=%d and value y=%d",x,y);
printf("enter two numbers:");
scanf("%d%d",&p,&s);
replace(&p,&s);
printf("p=%d,s=%d",p,s);
}
void change(int a,int b)
{
int k;
k=a;
a=b;
b=k;
printf("swaping using call by value:");
printf("%d%d",a,b);
}
void replace(int *a,int *b)
{
int k;
k=*a;
*a=*b;
*b=k;
printf("value of a=%d and value of b=%d",*a,*b);
}
