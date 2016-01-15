#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {
char str1[80],str2[80];
int d;
printf("Enter String 1");
gets(str1);
printf("Enter String 2");
gets(str2);
d=strcmp(str1,str2);
if(d>0)
  printf("%s > %s ",str1,str2);
if(d<0)
   printf("%s < %s ",str1,str2);
if(d==0)
   printf("%s = %s ",str1,str2);
getch();
}

/*str1>str2  +ve
str1<str2  -ve
str1==str2 0*/