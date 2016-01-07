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
fwrite(&E,sizeof(E),1,fp);
fclose(fp);
getch();
}