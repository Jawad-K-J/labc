#include<stdio.h>

void main()
{
char a,s1[30],s2[30];
int i,n,k=0;
printf("\nEnter a string:");
scanf("%s",s1);
for(i=0; s1[i]!='\0'; i++)
{k++;
}n=k;
k=k-1;
for(i=0; i<=n; i++)
{
s2[i]=s1[k];
k--;
}s2[n]='\0';
printf("After reversing the string=%s",s2);

}
