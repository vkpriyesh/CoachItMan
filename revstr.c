#include<stdio.h>
#include<conio.h>
void main()
 {
char str[80],ch;
int i,j,len;
printf("Enter String ");
gets(str);
//length of string
len=0;
for(i=0;str[i]!='\0';i++)
  {
   len++;
  }

for(i=0,j=len-1;i<len/2;i++,j--)
  {
   ch=str[i];
   str[i]=str[j];
   str[j]=ch;
  }

puts(str);

getch();
}
