#include<conio.h>
#include<iostream.h>
class  employee
 {
   private :
   int eno;
   char nm[40];
   float sal;
   char grade;
 void calc_grade()
  {
  if(sal>=5000)
    grade='A';
  else
    grade='B';
  }
 public :
   void read()
   {
   cout<<"Enter eno,name,sal";
   cin>>eno>>nm>>sal;
   calc_grade();
  }
 void show()
  {
   cout<<"Eno  "<<eno<<endl;
   cout<<"Name  "<<nm<<endl;
   cout<<"Sal "<<sal<<endl;
  cout<<"Grade "<<grade<<endl;
  }
};
void main()
 {
   clrscr();
   employee e1;
   e1.read();
   e1.show();
   getch();
}




