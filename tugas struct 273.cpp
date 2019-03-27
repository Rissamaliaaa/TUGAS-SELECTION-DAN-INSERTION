//TUGAS PRAKTIKUM STRUKTUR DATA
//DIPROGRAM OLEH : RISA AMALIA
//PRODI / NIM : D3 MANAJEMEN INFORMATIKA / 18050623019
//MATAKULIAH : PRAKTIKUM STRUKTUR DATA
//TUGAS MEMBUAT PROGRAM DENGAN INSERTION SORT

#include <iostream>
#include <conio.h>

using namespace std;

int data[10],data2[10];
int n;

void tukar(int a, int b)
{
 int t;
 t = data[b];
 data[b] = data[a];
 data[a] = t;
}

void insertion_sort()
{
 int temp,i,j;
 for(i=1;i<=n;i++){
  temp = data[i];
  j = i -1;
  while(data[j]>temp && j>=0)
  {
   data[j+1] = data[j];
   j--;
  }
 data[j+1] = temp;
 }
}
main()
{
cout	<< "\t ....................................................................\n";
cout	<< "\t	PROGRAM MENGURUTKAN ANGKA DENGAN METODE INSERTION SORT " << endl;
cout	<< "\t ....................................................................\n";
 
 cout<<"Masukkan Jumlah Data : ";
 cin>>n;
 for(int i=1;i<=n;i++)
 {
  cout<<"Masukkan data ke "<<i<<" : ";
  cin>>data[i];
  data2[i]=data[i];
 }

 insertion_sort();
 cout<<"Data Setelah di Sort : ";
 for(int i=1; i<=n; i++)
 {
  cout<<" "<<data[i];
 }
 cout<<"\n\nSorting dengan insertion sort Selesai";
 getch();
}

