#include<conio.h>
#include<fstream.h>
#include<stdio.h>
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
   int ret_eno()
    {
     return eno;
    }
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
 { employee e;
fstream ifile("emp.dat",ios::in);
fstream  ofile("temp.dat",ios::out);
int n;
cout<<"Enter Emp no ";
cin>>n;
while(1)
 {
  ifile.read((char*)&e,sizeof(e));
  if(ifile.eof()) break;
if(e.ret_eno()!=n)
 {
 ofile.write((char*)&e,sizeof(e));
 }
}
ifile.close();
ofile.close();
remove("emp.dat");
rename("temp.dat","emp.dat");
ifile.open("emp.dat",ios::in);
while(1)
 {
  ifile.read((char *)&e,sizeof(e));
  if(ifile.eof()) break;
 e.show();
}
ifile.close();
getch();
}