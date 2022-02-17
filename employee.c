#include<stdio.h>

void employee_entry();
void employee_list();
struct emp
{
int empid;
char name[20],place[50],desig[20];
double sallary;
}e;
void main()
{
FILE *fp;
int x,n;
do{
printf("\nMENU");
printf("\n1.EMPLOYEE ENTRY");
printf("\n2.EMPLOYEE LIST");
printf("\nEnter your choice:");
scanf("%d",&x);
switch(x)
{
case 1:employee_entry();
break;
case 2:employee_list();
break;
}
printf("\nDo u want to continue(1.yes/2.no):");
scanf("%d",&n);
}while(n==1);

}
void employee_entry()
{
FILE *fp;
fp=fopen("employee.txt","a");
printf("\nEnter the employee id:");
scanf("%d",&e.empid);
printf("\nEnter the name:");
scanf("%s",e.name);
printf("\nEnter the place:");
scanf("%s",e.place);
printf("\nEnter the designation:");
scanf("%s",e.desig);
printf("\nEnter the sallary:");
scanf("%lf",&e.sallary);
fprintf(fp,"%d",e.empid);
fprintf(fp,"\t%s\t%s\t%s\t",e.name,e.place,e.desig);
fprintf(fp,"%lf",e.sallary);
fprintf(fp,"\n");
fclose(fp);
}
void employee_list()
{
FILE *fp;
fp=fopen("employee.txt","r");
while(fscanf(fp,"%d\t%s\t%s\t%s\t%lf\n",&e.empid,e.name,e.place,e.desig,&e.sallary)!=EOF)
{
printf("%d\t%s\t%s\t%s\t%lf\n",e.empid,e.name,e.place,e.desig,e.sallary);
}
fclose(fp);
}
