#include<iostream>
using namespace std;
int main() {
   int i;
   //inputan yang harus dimasukkan user
   //deklarasi variabel yang dibutuhkan
   string password="2118131", Username ="MOHAMMAD_HARIFIN",a,b;
   i=1;
   int salah; //sebagai kondisi bahwa user salah dalam 3 kali
   cout<<"\n\t      =========";
   cout<<"\n\t      = LOGIN =";
   cout<<"\n\t      =========";
   do
   {
      cout<<"\nMasukkan Username : "; 
      cin>>a;
      cout<<"\nMasukkan Password : ";
      cin>>b;
      if (a== Username && b==password) //kondisi yang akan menentukan inputan user
      {
         cout<<"\n====================";
         cout<<"\nAnda berhasil login";
         cout<<"\n====================";
         i=4;
      }else {
         cout<<"\n====================================";
         cout<<"\nUsername atau passord anda salah("<<i<<"x)";
         cout<<"\n====================================";
         i = i +1; 
         salah=3; 
      }
   } while (i<=3);
   if (salah==3){//ouput yang akan di tampilkan saat kondisi bernilai 3
      //pernyataan yang akan di tampilkan
      cout<<"\n=========================================";
      cout<<"\nMOHON MAAF AKUN ANDA DI BLOK ";
      cout<<"\nHUBUNGI ADMIN BAHWA AKUN INI  MILIK ANDA ";
      cout<<"\n=========================================";
   }
}
