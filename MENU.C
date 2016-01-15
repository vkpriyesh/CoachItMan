 #include<stdio.h>
#include<conio.h>
#include<math.h>
void menu();
void Arect();
void Acircle();
void Atri();
void main()
 {
   int ch;
   do
    {
      clrscr();
      menu();
      scanf("%d",&ch);
      switch(ch)
       {
	 case 1:
	    Arect();
	    break;
	 case 2:
	  Acircle();
	  break;
	 case 3:
	   Atri();
	   break;
	 case 4:
	   break;
	 default :
	   printf("Incorrect Choice");
	   getch();
       }
      }while(ch!=4);

   }

void menu()
 {
  printf("     Main Menu\n");
  printf("1. Area of Rectangle\n");
  printf("2. Area of Circle\n");
  printf("3. Area of Triangle\n");
  printf("4.Exit\n");
  printf("Enter Your Choice   :   ");
}
void Arect()
  {
   float L,B,A;
   printf("Enter Length and Bread ");
   scanf("%f%f",&L,&B);
   A=L*B;
   printf("Area of Rectangle = %f",A);
   getch();
  }
void Acircle()
 {
   float R,A;
   printf("Enter Radius ");
   scanf("%f",&R);
   A=3.14*R*R;
   printf("Area of Circle = %f",A);
  getch();
 }
void Atri()
  {
   float a,b,c,S,A;
   printf("Enter 3 sides of Triangle ");
   scanf("%f%f%f",&a,&b,&c);
   S=(a+b+c)/2;
   A=sqrt(S*(S-a)*(S-b)*(S-c));
   printf("Area of Triangle = %f",A);
   getch();
  }




