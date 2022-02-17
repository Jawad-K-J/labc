#include<stdio.h>
void main ( )
{
int n, month, days;
printf("enter the number:");
scanf("%d",&n);
month= n/30;
days=n%30;
printf("month =%d\n",month);
printf("days =%d\n",days);
}
