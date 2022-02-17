#include<stdio.h>
#include<string.h>
union example{
int i;float f;
char str[20];
};
void main()
{
union example eg;
eg.i=10;printf("\neg.i=%d",eg.i);
eg.f=20.5;
printf("\neg.f=%f",eg.f);
strcpy(eg.str,"hello world");
printf("\neg.str=%s",eg.str);

}
