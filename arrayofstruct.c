#include<stdio.h>

struct student
{
int rollno;
char name[25];
int mark1,mark2,mark3;
char phno[10];
}s[25];
void main(){
int sum=0,i=0;
printf("\nenter the rol no:");
scanf("%d",&s[i].rollno);
i++;
printf("\nenter name:");
scanf("%s",s[i].name);
i++;
printf("\nenter the marks of student:");
printf("\nmark1=");
scanf("%d",&s[i].mark1);
i++;
printf("\nmark2=");
scanf("%d",&s[i].mark2);
i++;
printf("\nmark3=");
scanf("%d",&s[i].mark3);
sum=s[2].mark1+s[3].mark2+s[4].mark3;
i++;
printf("\nenter phone no:");
scanf("%s",s[i].phno);

printf("\n Student details");
i=0;
printf("\nRoll No:%d",s[i].rollno);
i++;
printf("\nName:%s",s[i].name);

i++;
printf("\nMark1=%d",s[i].mark1);
i++;printf("\nMark2=%d",s[i].mark2);
i++;
printf("\nMark3 =%d",s[i].mark3);
printf("\nSum of mark=%d",sum);
i++;
printf("\nPhone no:%s",s[i].phno);

}
