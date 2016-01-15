#include<iostream.h>
#include<conio.h>
int p;
class planet
 {
   const float g;
   int &ref;
   public :
   planet() : g(9.8),ref(p)
   {

   }
   planet(float temp) :g(temp),ref(p)
   {
   }
     void show()
      {
       cout<<"\ng = "<<g;
       cout<<"\nref = "<<ref++;
      }
 };
void main()
 {
  clrscr();

 p=100;
 planet e,m(3.27);
 e.show();
 m.show();
 cout<<"\np=" <<p;
 getch();

  }