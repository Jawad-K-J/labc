#include<stdio.h>
#include<math.h>
void main()
{int a,b,c,d;
float r1,r2;
printf("\nenter the values\t ");
scanf("%d%d%d",&a,&b,&c);
if(a==0)
{
printf("\nvalue of a should not be zero\t");}
else
{d=b*b-4*a*c;
if(d>0)
{r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("\nroots are real and unequal");
printf("\t root1=%f\troot2=%f",r1,r2);
}
else if(d==0)
{r1=-b/(2*a);
printf("\nroots are real and equal");
printf("\t root=%f",r1);
}
else
printf("roots are complex and imagenary");
}
}
