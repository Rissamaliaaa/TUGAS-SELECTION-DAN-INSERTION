//TUGAS PRAKTIKUM STRUKTUR DATA
//DIPROGRAM OLEH : RISA AMALIA
//PRODI / NIM : D3 MANAJEMEN INFORMATIKA / 18050623019
//MATAKULIAH : PRAKTIKUM STRUKTUR DATA
//TUGAS MEMBUAT PROGRAM DENGAN SELECTION SORT

#include <iostream>
#include <conio.h>

using namespace std;

main()
{
    
    int a,b,c,d,pos,tampung;
    int nilai[100];
    
	cout	<< "\t ....................................................................\n";
	cout	<< "\t	PROGRAM MENGURUTKAN ANGKA DENGAN METODE SELECTION SORT " << endl;
	cout	<< "\t ....................................................................\n";
	
    cout	<<	"		\n\n\t\tMASUKKAN BANYAKNYA INPUTAN : ";
    cin		>>	a;
    cout	<< "\t --------------------------------------------------------------------\n";
    
    for (	int b=0; b<a; b++	)
    {
        	cout	<<	"\t	NILAI KE - "	<<	(b+1)	<<	"\t\t   : "	;
        	cin		>>	nilai[b];
    }
    
   cout		<<	endl << endl;
   cout		<<	"\t\t____________________________________________\n";
   cout		<<	" \t\t	DAFTAR INPUTAN SEBELUM DISORTING	"	<<	endl;
   cout		<<	"\t\t____________________________________________\n";
   
   for (	int b=0; b<a; b++	)
   {
        	cout	<<	"\t\t\t\t" << nilai[b]	<<	endl;
   }
   cout		<<	endl;

for (  int b=0; b<a-1; ++b	)
 {
  pos=b;
  for (	int l=b+1 ; l<a; ++l )
    {
        if (	nilai[c]<nilai[pos]	)
        {
            pos=l;
        }
    }
    
  if (	pos !=b	)
    {
        tampung		=	nilai[pos]	;
        nilai[pos]	=	nilai[b]	;
        nilai[b]	=	tampung		;
    }
    
  			cout	<<	"\t\t\t LANGKAH KE - "							<<	b+1	<<	endl;
  			cout	<<	"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 	"	<<	endl;

    for (	int d=0	; d<a	;	++d ) 
    {
        	cout	<<	"\t\t\t\t" << nilai[d]	<<	endl;
    }
  			cout	<<	endl;
 }

   cout		<<	"\t\t_______________________________________________\n";
   cout		<<	" \t\t	DAFTAR INPUTAN SETELAH DISORTING	"	<<	endl;
   cout		<<	"\t\t_______________________________________________\n";   
    
	for (	int b=0	; b<a ; ++b	)
    {
        	cout	<< "\t\t\t\t" <<	nilai[b]	<<	endl;
    }

getch();
}
