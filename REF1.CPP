#include<iostream.h>
#include<conio.h>
/*void swap(int *a,int *b)
 {
 int t;
 t=*a;
 *a=*b;
 *b=t;
 }*/
void swap(int &a, int &b)
 {
 int t;
 t=a;
 a=b;
 b=t;
}

void main()
 {
  clrscr();
 int x,y;
 cout<<"Enter 2 values  ";
 cin>>x>>y;
 swap(x,y);
 cout<<"x = "<<x;
 cout<<"\ny ="<<y;
 getch();
  }