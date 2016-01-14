#include<fstream.h>
#include<conio.h>
#include<string.h>
void main()
 {
  clrscr();
int i;
  char str[80];
ofstream fout("abc.txt");
cout<<"Enter 4 lines \n";
for(i=1;i<=4;i++)
 {
  cin.getline(str,80);
//  fout.write(str,strlen(str));
fout<<str<<"\n";
}
fout.close();
 getch();
 }





