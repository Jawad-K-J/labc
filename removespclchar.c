#include<stdio.h>
#include<string.h>
void main()
{
char s[25],s2[25];
int i,l;
printf("enter the string:");
scanf("%[^\n]",s);
for(i=0;s[i]!='\0';i++)
{if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
{ 
l=strlen(s2);
s2[l]=s[i]; }
} printf("%s",s2);

}
