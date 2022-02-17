#include<stdio.h>

void main()
{char s[25],s2[25];
int i;printf("enter the string:");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{ if((s[i]>='A') && (s[i]<='Z'))
{s2[i]=s[i]+32; }else
{ s2[i]=s[i];
} } printf("%s",s2);

}
