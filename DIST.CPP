#include<iostream.h>
#include<conio.h>
class distance
{
 int inch,feet;
 void convert()
  {
   feet=feet+inch/12;
   inch=inch%12;
  }
 public :

 distance() {inch=0;feet=0; }

 distance( int i,int f)
 {
inch=i;
feet=f;
convert();
 }
 void show()
   {
    cout<<"Feet = "<<feet<<endl;
    cout<<"Inch = "<<inch<<endl;
   }
 //copy constructor
 distance(distance &d)
  {
    inch=d.inch;
    feet=d.feet;
  }
 void read()
 {   cout<<"Enter feet and inch ";
   cin>>feet>>inch;
      convert(); }
distance operator +(distance d)
 { distance t;
   t.inch=inch+d.inch;
   t.feet=feet+d.feet;
   t.convert();
   return t;
 }
 distance operator ++()
  {
    distance t;
    t.inch=++inch;
    t.feet=++feet;
  convert();
  t.convert();
  return t;
 }
 distance operator ++(int)
  {
    distance t;
    t.inch=inch++;
    t.feet=feet++;
  convert();
  t.convert();
    return t;
 }
 int operator >(distance d)
 {
 if(feet>d.feet)
  return 1;
 else if( (feet==d.feet) &&(inch>d.inch) )
     return 1;
 else
  return 0;
 }
};

void main()
 { clrscr();
 distance d1,d2;
 d1.read();
d2.read();
if(d1>d2)
  d1.show();
else
 d2.show();
getch(); }






