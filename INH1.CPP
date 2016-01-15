#include<iostream.h>
#include<conio.h>
class person
 {
   int pid;
   char pname[40];
 protected :
   char address[40];
 public :
   void read()
    {
     cout<<"Enter id , name";
     cin>>pid>>pname;
     cout<<"Enter address";
     cin>>address;
    }
 void show()
  { cout<<"id  "<<pid<<"\nName "<<pname;
   cout<<"\nAddress   "<<address<<endl;
  }
 };
 class emp : public person
 {  float sal;
public :
void updateaddress()
 { cout<<"Enter new address ";
  cin>>address; }
 void read()
  {  person::read();
   cout<<"Enter sal ";
   cin>>sal;  }
 void show()
 { person::show();
  cout<<"Salary "<<sal;
 }
};
void main()
 {  emp e; clrscr();
  e.read();
  e.show();
  getch();
 }


