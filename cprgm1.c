#include<stdio.h>
void main()
{
int a,b,c,d,q,q2;
printf("Enter the ax^2+bx+c:");
scanf("%d %d %d",&a,&b,&c);
d=(b*b)-(4*a*c);
if(d==0)
{
q=b/(2*a);
printf("Roots are %d",q);
}
else if(d>0){
q=-b/(2*a);
q2=b/(2*a);
printf("Roots are:%d %d",q,q2);
}
else{
printf("roots are imaginary");
}
}

