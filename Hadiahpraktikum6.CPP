#include <iostream.h>
#include <conio.h>
#include <string.h>

int main()
{
char kode[5];
char *made;
char *processor;

cout<<"masukkan kode produk: "; cin>>kode;
switch(kode[0])
{
case 'A':
made="Amerika";
break;
case 'J':
made="Jepang";
break;
case 'C':
made="China";
break;
case 'K':
made="Korea";
break;
case 'G':
made="German";
break;
case 'T':
made="Taiwan";
break;
default:
made="Kode yag dimasukkan Salah";
break;
}

if(kode[1]=='3')
{processor="intel 386mhz";}
else if(kode[1]=='4')
{processor="intel 486mhz";}
else if(kode[1]=='5')
{processor="intel pentium";}
else
{processor="Kode Salah";}

cout<<"Made: "<<made<<endl;
cout<<"Processor: "<<processor<<endl;
cout<<"Kapasitas Harddisk: "<<kode[2]<<kode[3]<<kode[4]<<"Gigabyte"<<endl;

getch();
}
