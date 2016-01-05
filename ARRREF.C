#include<stdio.h>
#include<conio.h>
int search(int a[],int s,int v)
 {
  int i;
  for(i=0;i<s;i++)
   {
    if(a[i]==v)
     return i;
   }
  return -1;
 }

void main()
{ int b[]={1,232,444,556,77},i;
 clrscr();
 i=search(b,5,124);
 if(i!=-1)
   printf("Found at %d",i);
 else
   printf("Not found ");
 getch();
}
