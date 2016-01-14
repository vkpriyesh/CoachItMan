#include<fstream.h>
#include<conio.h>
#include<string.h>
void main()
 {
  clrscr();
int i;
  char str[80];
ifstream fin("abc.txt");
while(1)
 {
  fin.getline(str,80);
  if(fin.eof()) break;
  cout<<str<<"\n";
 }

fin.close();
 getch();
 }





