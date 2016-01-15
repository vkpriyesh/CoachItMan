#include<stdio.h>
#include<conio.h>
void main()
 {
  int a[10]={2,24,4,5,6,78,6,5,4,3},i,j,t;
  clrscr();

 for( i=0; j=9;i<j;)
   {
     if(a[i]%2==0)
       {
	t=a[j];
	a[j]=a[i];
	a[i]=t;
	j--;
       }
     if(a[i]%2!=0)
       { i++; }
     }

 for(i=0;i<=9;i++)
   printf("%d ",a[i]);
   getch();
 }



