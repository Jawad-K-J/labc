#include<stdio.h>

void main()
{
char s1[30];
int i,c=0;
printf("Enter a string:");
scanf("%s",s1);
for(i=0; s1[i]!='\0'; i++)
{
c++;
}
printf("%d",c);
}
