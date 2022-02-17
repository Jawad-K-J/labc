#include<stdio.h>

void main()
{char s1[25],s2[25];
int i;printf("\nEnter the first string:\n");
scanf("%s",s1);
printf("\nEnter the second string:\n");
scanf("%s",s2);for(i=0; s1[i]!='\0'; i++)
{s2[i]=s1[i];}printf("\nafter copying string\n");
printf("\nThe first string=%s\n",s1);
printf("\nThe second string=%s\n",s2);

}
