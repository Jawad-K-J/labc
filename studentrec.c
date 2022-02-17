#include<stdio.h>

struct student
{
int rollno;
char name[25];
int mark1,mark2,mark3;
char phno[10];
}s;
void main(){
int sum=0;
printf("\nenter the rol no:");
scanf("%d",&s.rollno);
printf("\nenter name:");
scanf("%s",s.name);
printf("\nenter the marks of student:");
printf("\nmark1=");
scanf("%d",&s.mark1);
printf("\nmark2=");
scanf("%d",&s.mark2);
printf("\nmark3=");
scanf("%d",&s.mark3);
sum=s.mark1+s.mark2+s.mark3;
printf("\nenter phone no:");
scanf("%s",s.phno);
printf("\n Student details");
printf("\nRoll No:%d",s.rollno);
printf("\nName:%s",s.name);
printf("\nPhone no:%s",s.phno);
printf("\nMark1=%d",s.mark1);
printf("\nMark2=%d",s.mark2);
printf("\nMark3 =%d",s.mark3);
printf("\nSum of mark=%d",sum);

}
