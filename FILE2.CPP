#include<fstream.h>
#include<conio.h>
void main()
 {
  clrscr();

  char ch;
ifstream fin("abc.txt");
while(1)
 {
    fin.get(ch);
    if(fin.eof()) break;
    cout<<ch;
 }
fin.close();
 getch();
 }




