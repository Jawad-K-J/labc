#include<stdio.h>
struct student{
int rollno;
char name[20];
int phno;
}s1,s2;
void main()
{
printf("Enter Rollno:");
scanf("%d",&s1.rollno);
printf("Enter name:");
scanf("%s",s1.name);
printf("Enter phone number:");
scanf("%d",&s1.phno);
printf("Enter Rollno:");
scanf("%d",&s2.rollno);
printf("Enter name:");
scanf("%s",s2.name);
printf("Enter phone number:");
scanf("%d",&s2.phno);
printf("Student 1 details:");
printf("Roll no :%d\t Name:%s \t Phone no:%d \t",s1.rollno,s1.name,s1.phno);
printf("Student 2 details");
printf("Roll no :%d\t Name:%s \t Phone no:%d \t",s2.rollno,s2.name,s2.phno);
}
 

