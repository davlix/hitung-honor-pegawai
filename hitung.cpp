# include <stdio.h>
# include <conio.h>
# include <iostream>
# include <iomanip>
using namespace std;
struct
{
 char nama[20];
 int jam, lebih, harian, jumlah;
}honor[10];

bintang()
{
 cout<<"\t***********************************************"<<endl;
}

garis()
{
 cout<<"\t--------------------------------------------------"<<endl;
}

int lbh(int jam)
{
 if(jam >= 8)
 {
  return (jam - 8);
 }
 else
 {
  return (0);
 }
}

main()
{
 int i, n, total=0;


 bintang();
 cout<<"\t\tMenghitung Honor Pegawai Honorer"<<endl;
 bintang();
 cout<<"\n\tMasukkan Jumlah Karyawan Yang Akan Diinput : "; cin>>n;

 for(i = 1; i <= n; i++)
 {
  cout<<"\n\tData Ke - "<<i<<endl;
  cout<<"\t-----------"<<endl;
  cout<<"\t\tNama Pegawai     : "; cin>>honor[i].nama;
  cout<<"\t\tJumlah Jam Kerja : "; cin>>honor[i].jam;
  cout<<endl;

  honor[i].harian = 15000;
  honor[i].lebih = honor[i].jam - 8;
  honor[i].jumlah = honor[i].harian + (8000 * honor[i].lebih);
  total = total + honor[i].jumlah;
 }

 garis();
 cout<<"\t\t  Daftar Honor Pegawai Honorer "<<endl;
 cout<<"\t\t       PT. ALAKADARNYA"<<endl;
 garis();
 cout<<endl;
 garis();
 cout<<"\t| No. |  Nama   |  Jumlah   | Kelebihan | Jumlah |"<<endl;
 cout<<"\t|     | Pegawai | Jam Kerja | Jam Kerja |  Honor |"<<endl;
 garis();

 for(i = 1; i <= n; i++)
 {
  cout<<setw(3)<<"\t| "<<i;
  cout<<setw(5)<<" | "<<honor[i].nama;
  cout<<setw(6)<<" | "<<honor[i].jam<<" jam";
  cout<<setw(6)<<" | "<<lbh(honor[i].jam)<<" jam";
  cout<<setw(7)<<"  | "<<honor[i].jumlah<<"  |"<<endl;
 }

 garis();
 cout<<"\tJumlah Pegawai          :       \t"<<n<<" orang"<<endl;
 cout<<"\tTotal Honor Keseluruhan :       \tRp. "<<total<<endl;
 garis();

 getch();
}
