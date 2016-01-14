void main()
 {
   int i,j,k;
   clrscr();
   for(i=1;i<=6;i++)
    {
      if(i<=3)
	{
	  for(j=1;j<=i;j++)
	    printf("*");

	}
      else
	{
	   for(k=i;k>=4;k--)
		printf(" ");

	   for(j=1;j>=i-5;j--)
	     printf("*");
	}
      if(i!=3)
      printf("\n");
	 if(i==3)
	  printf("\b");
    }
    getch();
   }
