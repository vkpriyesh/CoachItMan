#include<conio.h>
#include<fstream.h>
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
fstream file("emp.dat",ios::in|ios::out);
int n;
cout<<"Enter Emp no ";
cin>>n;
while(1)
 {
  file.read((char*)&e,sizeof(e));
  if(file.eof()) break;
if(e.ret_eno()==n)
 {
 file.seekp(file.tellg()-sizeof(e),ios::beg);
 e.read();
 file.write((char*)&e,sizeof(e));
}
}
file.close();
file.open("emp.dat",ios::in);
while(1)
 {
  file.read((char *)&e,sizeof(e));
  if(file.eof()) break;
 e.show();
}
file.close();
getch();
}




