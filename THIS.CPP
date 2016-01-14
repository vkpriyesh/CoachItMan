#include<iostream.h>
#include<conio.h>
class distance
{
 int inch,feet;
 public :

 distance() {inch=0;feet=0; }
 distance( int inch,int feet)
 {
 this->inch=inch;
 this->feet=feet;
  }
 void show()
   {
    cout<<"Feet = "<<feet<<endl;
    cout<<"Inch = "<<inch<<endl;
   }
   void read();
 //copy constructor
 distance(distance &d)
  {
    inch=d.inch+1;
    feet=d.feet;
  }
};
 void distance::read()
 {   cout<<"Enter feet and inch ";
   cin>>feet>>inch; }

void main()
 {
 clrscr();
 distance d1;
 d1.read();
 distance d2(d1);
 d2.show();
 getch();
 }






