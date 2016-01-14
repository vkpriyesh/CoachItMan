#include<stdio.h>
#include<conio.h>
void main()
{
 char str[80];
 int i;
 printf("Enter String ");
  gets(str);
 for(i=0;str[i]!='\0';i++)
   if(str[i]>='a'&&str[i]<='z')
      str[i]=str[i]-32;
 puts(str);
 getch();
}
