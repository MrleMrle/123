// MD5:SSov/tPcSuSoL+DdZNZUZw==// Verifikator 5.05// Program:// Opis zadatka:// Autor: // Pocetno vrijeme:12:00:00 AM// Završno vrijeme:12:00:00 AM// Identifikatori:// IP:fe80::909c:4a5d:7d8:171c%4 ( 2898 )// #:// Uspješnih/neuspješnih prevodenja:0/0#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;
void TEST(int i){fstream dat;dat.clear(); 
  static int br_reda[]={0,5}; 
  static int p[]={0,0}; 
  static int suma=0;static int zag=0;static int zaglavlje=0;static int br=0;p[i]++;suma++;int f,s=0;char c;
  for (f=1;f<=1;f++)s=s+p[f];if (s!=suma){cout<<"Neispravna suma brojaca. Poziv: TEST("<<i<<")"<<endl;cin>>c;return;} 
  zag=(int)time(0);if (zag==zaglavlje){br++;if ((br>1)&&(p[i]>1))return;} else br=0;zaglavlje = (int)time(0);
  dat.open("testiranje.txt",ios::out);
  dat << zaglavlje << endl <<"Rezultati testiranja (test N = 1):" << endl; 
  for (f=1;f<=1;f++){dat << f << char(91) << br_reda[f] << char(93) << char(58) << p[f] << endl;} 
  dat.close();dat.clear(); 
}; 
 #include <iostream>
using namespace std;

//###########################
int main(){TEST(1);
  system("PAUSE");
}  // Postoci testiranja:  0%// H1:0// H2:0// H3:0// H4:0
