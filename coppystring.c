#include<stdio.h>

void main()
{
char s1[25],s2[25];
int i,f=0;
printf("\nenter the first string:");
scanf("%s",s1);
printf("\nenter the second string:");
scanf("%s",s2);
for(i=0;s2[i]!='\0';i++);
{if(s2[i]!=s1[i])
{f=1;}
}
if(f==1)
printf("strings are not same");
else
printf("strings are same");

}
