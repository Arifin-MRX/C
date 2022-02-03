#include <iostream>
using namespace std;
double prismaSegitiga(double alas , double tinggi){
    double hasil;
    hasil=(alas*tinggi);
    return hasil;
}
double LimasSegiempat(double alas , double tinggi){
    double hasil;
    hasil = (alas * tinggi) / 3;
    return hasil;
}
double tabung(double jari , double tinggi){
    double hasil;
    hasil = 3.14 * (jari * jari) * tinggi;
    return hasil;
}
double limasSegitiga(int alas , int tinggi){
    int hasil;
    hasil = (alas*tinggi)/3;
    return hasil;
}
int main(){
    double a,b;
    int pil;
cout<<"Bilangan Pertama =";
cin>>a;
cout<<"Bilangan Kedua = ";
cin>>b;
cout<<"\n[1] Prisma Segitiga"<<endl;
cout<<"[2] Limas Segi empat"<<endl;
cout<<"[3] Tabung"<<endl;
cout<<"[4] Limas Segitiga "<<endl;
kembali:
cout<<"\nPilih Perhitungan = ";
cin>>pil;
    switch(pil){
case 1:
    cout<<prismaSegitiga(a,b);
    break;
case 2:
        cout<<LimasSegiempat(a,b);
    break;
case 3:
    cout<<tabung(a,b);
    break;
case 4:
    cout<<limasSegitiga(a,b);
    break;
default:
    cout<<"EROR";
    cout<<endl;
    goto kembali;
    }
return 0;
}
