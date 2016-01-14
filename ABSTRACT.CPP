#include<conio.h>
#include<iostream.h>
class Shape
 {
 public  :
virtual  void Area()=0;
};
class rectangle:public Shape
 {
  public :
   void Area()
    {
     float l,b;
     cout<<"enter length and breadth";
     cin>>l>>b;
     cout<<"\nArea of rectangle "<<l*b<<endl;
    }
};
class circle : public Shape
 {
  public :
   void Area()
   {
    float r;
    cout<<"Enter radius ";
    cin>>r;
    cout<<"\nArea of circle  "<<3.14*r*r<<endl;
   }
 };
class triangle:public Shape
 { public :
 void Area(){
  float b,h;
  cout<<"Enter Base and Height ";
  cin>>b>>h;
  cout<<"\nArea of Rt. angle Triangle "<<0.5*b*h;
  }
};
void main()
 {clrscr();
Shape *s[]={new rectangle,new circle,
new triangle};
for(int i=0;i<=2;i++)
   s[i]->Area();

for(i=0;i<=2;i++)
  delete s[i];

getch();
}

