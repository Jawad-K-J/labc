#include<stdio.h>

void main()
{
int *ptr1,**ptr2;
int n=25;
ptr1=&n;
ptr2=&ptr1;
printf("\nn=%d",n);
printf("\nvalue in ptr1=%d",*ptr1);
printf("\nvalue in ptr2=%d",**ptr2);

}
