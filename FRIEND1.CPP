#include<iostream.h>
#include<conio.h>

class emp
 {
   int eno;
   char name[40];
   float sal;
 public :
  void read()
   {
    cout<<"Enter eno, name and sal";
    cin>>eno>>name>>sal;
   }
  void show()
   {
    cout<<"Eno "<<eno;
    cout<<"\nName "<<name;
    cout<<"\nsalary "<<sal;
   }
friend void fun(emp&);
};
void fun(emp &e)
 {
cout<<"Enter new  no ";
cin>>e.eno;
 }
void main()
{clrscr();
  emp t;
  t.read();
  fun(t);
  t.show();
  getch();
}