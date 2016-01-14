#include<conio.h>
#include<iostream.h>
class Account
 {
   int acno;
   float bal;
int chkbal(float amt)
{
  if(bal-amt>=1000)
    return 1;
  else
   return 0;
 }
 public :
      void createacc()
       {
	cout<<"Enter acno,opening bal";
	cin>>acno>>bal;
       }
   void display()
    {
     cout<<"Account No "<<acno<<endl;
     cout<<"Balance "<<bal<<endl;
    }
 void deposit()
  {
   float amt;
   cout<<"Enter amount to deposit ";
   cin>>amt;
   bal=bal+amt;
   cout<<"Now your balance is "<<bal;
  }
 void withdraw()
  {
    float amt;
   cout<<"Enter amt to withdraw"; cin>>amt;
if( chkbal(amt)==1)
  {bal=bal-amt;
cout<<"Now your balance is "<<bal<<endl;}
else
{cout<<"Insufficient Balance ";
cout<<"\nYour Balance is "<<bal<<endl; }
}
};
void main()
 { clrscr();
Account A1;
A1.createacc();
A1.deposit();
A1.withdraw();
A1.display();
A1.withdraw();
getch();
}

