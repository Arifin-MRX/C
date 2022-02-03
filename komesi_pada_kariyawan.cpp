#include <iostream>
using namespace std;
 int main(){
     int l=0;
/*Jika karyawan lembur dibawah 3 jam maka akan mendapatkan komisi sebesar Rp. 10.000
Jika karyawan dapat lembur diatas 3 jam maka akan mendapatkan komisi sebesar Rp. 20.000 
Dan jika karyawan lembur diatas 5 jam maka akan mendapatkan komisi sebesar Rp. 50.000*/
     cout<<endl;
     cout << "Masukkan jumlah jam lembur : ";
     cin>>l;
     cout<<endl;

    if (l<3){
         int l;
         l=10000;
         cout<<"anda mendapatkan komesi sebesar Rp"<<l;
         cout<<"\n-------------------------------------------";
     }else 
    if (l>=3 && l<=4){
         int l;
         l=20000;
         cout<<"anda mendapatkan komesi sebesar Rp"<<l;
         cout<<"\n-------------------------------------------";
     }else
    if (l>=5){
         int l;
         l=50000;
         cout<<"anda mendapatkan komesi sebesar Rp"<<l;
         cout<<"\n-------------------------------------------";
     }else 
 return 0;
 }