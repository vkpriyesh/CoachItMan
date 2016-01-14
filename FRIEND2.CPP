#include<iostream.h>
#include<conio.h>
class address
{
 int hno;
 char street[40];
 char city[40];
 public :
  void getaddress()
   {
    cout<<"\nEnter hno ,street and city \n";
    cin>>hno>>street>>city;
    }
 void showaddress()
  {
   cout<<"Hno  "<<hno<<endl;
   cout<<"Street "<<street<<endl;
   cout<<"City "<<city<<endl;
  }
friend class emp;
};
class emp
 {
   int eno;
   char name[40];
   float sal;
   address a1;
 public :
  void read()
   {
    cout<<"\nEnter eno, name and sal\n";
    cin>>eno>>name>>sal;
    cout<<"\nEnter address of employee\n  ";
   a1.getaddress();
   }
  void show()
   {
    cout<<"\nEno "<<eno;
    cout<<"\nName "<<name;
    cout<<"\nsalary "<<sal;
    cout<<"\nAddress of Employee \n";
    a1.showaddress();
   }
   void updateaddress()
   {
    cout<<"\nEnter new hno and streetn\n ";
    cin>>a1.hno>>a1.street;
   }

};
void main()
{clrscr();
  emp e;
  e.read();
  e.show();
  e.updateaddress();
  e.show();
  getch();
}