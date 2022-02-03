#include <iostream>
using namespace std;

int main(){
    int pilihan, s, hasil1, hasil2, p, l;
    float k,r,phi=3.14,l2;
    cout<<"\n1. Luas dan keliling persegi";
    cout<<"\n2. Luas dan keiling persegi panjang";
    cout<<"\n3. Luas dan keliling lingkaran";
    cout<<"\nMasukkan Pilihan : ";
    cin>>pilihan;
    switch (pilihan)
    {
    case 1:
        cout<<"\nMenghitung Keliling Persegi";
        cout<<"\n===========================";
        cout<<"\nMasukkan sisi : ";
        cin>>s;
        hasil1=4*s;
        hasil2=s*s;
        cout<<"\n===========================";
        cout<<"\nKeliling Persegi adalah "<<hasil1;
        cout<<"\nLuas Persegi adalah "<<hasil2;
        cout<<"\n===========================";
        break;
    case 2:
        cout<<"\nMenghitung Keliling Persegi Panjang";
        cout<<"\n===================================";
        cout<<"\nMasukkan panjang : ";
        cin>>p;
        cout<<"\nMasukkan lebar : ";
        cin>>l;
        hasil1=2*(p+l);
        hasil2=p*l;
        cout<<"\n=====================================";
        cout<<"\nKeliling Persegi panjang adalah "<<hasil1;
        cout<<"\nLuas Persegi panjang adalah "<<hasil2;
        cout<<"\n=====================================";
        break;
    case 3:
        cout<<"\nMenghitung Keliling Lingkaran";
        cout<<"\n===================================";
        cout<<"\nMasukkan Jari-jari lingkaran : ";
        cin>>r;
        k=2*phi*r;
        l2=phi*r*r;
        cout<<"\n=====================================";
        cout<<"\nKeliling Lingkaran adalah "<<k;
        cout<<"\nLuas Lingkaran adalah "<<l2;
        cout<<"\n=====================================";
        break;
    default:
        cout<<"Maaf pilihan yang anda masukkan gak ada";
        break;
    }
}