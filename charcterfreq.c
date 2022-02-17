#include<stdio.h>
void main()
{
 char a[20];
 int i;
 int freq[256]={0};
printf("Enter a string:");
scanf("%s",a);
for (i=0;a[i]!='\0';i++)
{
 freq[a[i]]++;
}
for(i=0;i<256;i++)
{
 if(freq[i]!=0)
 {
 printf("character %c occurs %d times\n",i,freq[i]);
}
}
}
