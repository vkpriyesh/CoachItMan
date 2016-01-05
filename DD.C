#include<stdio.h>
#include<conio.h>
void Force(float m, float g=9.8)
{
float F;
F=m*g;
printf("\nF = %f",F);
getch();
}
void main()
  {
     Force(1000,2.3);
     Force(1200);
     Force(123);
}
