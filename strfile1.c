#include<stdio.h>
#include<conio.h>
struct Emp
 { int eno;
 char name[40];
 long sal;
 };

void main()
{
FILE *fp;
struct Emp E;
fp=fopen("Emp.dat","r");
while(fscanf(fp,"%d%s%ld",&E.eno,E.name,&E.sal)!=EOF)
 {
   printf("\nEmployee No  %d",E.eno);
   printf("\nName  %s",E.name);
   printf("\nSalary %ld",E.sal);
 }
fclose(fp);
getch();
}
