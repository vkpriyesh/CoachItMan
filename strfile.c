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
fp=fopen("Emp.dat","a");
printf("Enter Details of employee ");
printf("\nEnter code, Name , sal ");
scanf("%d",&E.eno); fflush(stdin);
gets(E.name);
scanf("%ld",&E.sal);
fprintf(fp,"%d %s\n%ld\n",E.eno,E.name,E.sal);
fclose(fp);
getch();
}
