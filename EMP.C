#include<iostream.h>
#include<conio.h>
#include<string.h>
class person
 {
  int pid;
  char pname[40];
  public :
   void readperson()
    {
     cout<<"Enter Id and Name ";
     cin>>pid>>pname;
     }
    void showperson()
     {
      cout<<"Id "<<pid<<endl;
      cout<<"Name "<<pname<<endl;
      }
   };
 class  Employee : protected person
  {
    float sal;
     public :
       void reademp()
	{  readperson();
	   cout<<"Enter sal ";
	   cin>>sal;
	 }
	void showemp()
	 {
	   showperson();
	    cout<<"salary "<<sal;
	   }
     };
    void main()
     {  clrscr();
       Employee E;
       E.reademp();
       E.showemp();
       getch();
     }









