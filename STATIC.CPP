#include<iostream.h>
#include<conio.h>
#include<string.h>
class book
 {
   int bno;
   char bname[40];
 public :
    static int cnt;
 void read()
   {
      cout<<"Enter bno,bname";
   cin>>bno>>bname;
  }
 static void fun()
  {
cout<<"Cnt ="<<cnt;
cnt++;
   }
 void show()
   {
   cout<<" bno "<<bno<<"\nbname"<<bname<<endl;
   cout<<"Cnt "<<cnt;
  }
};
int book::cnt;
void main()
 {
 clrscr();
 getch();
 }









