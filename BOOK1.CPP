#include<iostream.h>
#include<conio.h>
#include<string.h>
class book
 {
   int bno;
   char bname[40];

 public :
    static int cnt;
  book()
  {
   cnt++; bno=0; strcpy(bname,"Blank");
  }
 void read()
   {
      cout<<"Enter bno,bname";
   cin>>bno>>bname;
  }

 void show()
   {
   cout<<" bno "<<bno<<"\nbname"<<bname<<endl;
  }
~book()
 {
 cnt--;
 cout<<"Deleted object id "<<bno<<"\n";
}
};
int book::cnt;
void main()
 {
 clrscr();
  book *ptr[10];
    ptr[0]=new book;
    ptr[1]=new book;
  cout<<book::cnt<<endl;
  delete ptr[0];
  cout<<book::cnt;
  delete ptr[1];
  cout<<book::cnt;
  getch();
 }
