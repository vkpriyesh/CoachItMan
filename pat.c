#include<stdio.h>
#include<conio.h>
void main()
 {
    int i,j,k;
    clrscr();
    for(i=1;i<=5;i=i+1)
       {
       for(k=1;k<=i-1;k=k+1)
	  printf(" ");
       for(j=1;j<=6-i;j=j+1)
	  printf("%d",i);
       printf("\n");
       }
 getch();
  }

     /*
     1 1 1 1 1
       2 2 2 2
	 3 3 3
	   4 4
	     5


	     *
	    * *
	   * * *
	  * * * *
	   * * *
	    * *
	     *

0



       */





