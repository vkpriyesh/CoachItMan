#include<iostream.h>
#include<conio.h>
#include<string.h>
class emp
 {
   int eno;
   char name[40];
   float sal;
   public :
    emp() //default constructor
     { eno=100;
       strcpy(name,"NULL");
       sal=0;
       }
    emp(int e, char nm[],float s)
     { eno=e;
       strcpy(name,nm);
       sal=s;
     }
~emp()
 {
 cout<<"\nDeleting object empno = "<<eno;
 getch();
 }
    void read(){
     cout<<"Enter eno,name,sal";
     cin>>eno>>name>>sal;
    }
   void show()
    {
     cout<<"Empno "<<eno;
     cout<<"\nName "<<name;
     cout<<"\nSalary "<<sal<<endl;
     }
};
void main()
 {
  clrscr();
emp e1(101,"Amit",1000),e2(102,"Sumit",2000);
e1.show();
e2.show();
 getch();
  }