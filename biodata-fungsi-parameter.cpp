#include <iostream>
using namespace std;
string bio(string nama){
    string a;
    a=nama;
    return a;
}
int induk(int nim){
    int a;
    a= nim;
    return a;
}
int data(){
    cout<<"\nNama : Mohammad harifin";
    cout<<"\nNim  : 2118131";
}

int main(){
string nama;
int nim;
cout<<"Masukkan Nama : ";
getline(cin,nama);
cout<<"Masukkan Nim : ";
cin >>nim;
cout<<"\n===================================="<<endl;
cout<<"Hasil dengan Menggunakan Parameter :";
cout<<bio(nama)<<" "<<induk(nim);
cout<<endl;
cout<<"=================================="<<endl;
cout<<"Nama dan Nim tanpa parameter anda adalah :";
cout<< data();
cout<<"\n=================================="<<endl;
return 0;
}
