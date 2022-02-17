#include<stdio.h>

void main()
{
char s1[30],s2[30];
int i,k=0;
printf("\nEnter the first string:");
scanf("%s",s1);
printf("\nEnter the second string:");
scanf("%s",s2);
for(i=0; s2[i]!='\0'; i++)
{
k++;
}
for(i=0; s1[i]!='\0'; i++)
{s2[k]=s1[i];
k++;
}
printf("\nAfter concatination:");
printf("%s",s2);

}
