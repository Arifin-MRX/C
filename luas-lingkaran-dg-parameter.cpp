#include <iostream>
using namespace std;
//dengan parameter
double luas (int r){//int r: parameter formal yang di ambil dari inputan
int hasil;
const float pi = 3.14;
hasil = pi * r * r;
return hasil;
}
//tanpa parameter
double keliling(){
int d=8;
const float pi = 3.14;
return (pi*d);
}

int main(){
int r;
cout<<"MENGHITUNG LUAS LINGKARAN DENGAN PARAMETER"<<endl;
cout<<"Masukkan Nilai jari - jari  : ";
cin>>r;
cout<<"Hasil luas lingkaran dari jari jari : "<<r<<" adalah "<<luas(r)<<endl;
cout<<"\n"<<endl;
cout<<"MENGHITUNG KELILING TANPA PARAMETER"<<endl;
cout<<"Nilai keliling dari lingkaran adalah: "<<keliling()<<endl;
cout<<"-------------------------------------------------";
return 0;
}
