#include<fstream.h>
#include<conio.h>
void main()
 {
  clrscr();
  ofstream fout("abc.txt");
  char ch;
  cout<<"Enter 10 characters ";
  for(int i=1;i<=10;i++)
   {
    cin>>ch;
    fout<<ch;
  }
fout.close();
ifstream fin("abc.txt");
while(1)
 {
    fin>>ch;
    if(fin.eof()) break;
    cout<<ch;
}
fin.close();
 getch();
 }




