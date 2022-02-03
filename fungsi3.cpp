#include <iostream>
using namespace std;
//proram dari tugas yang perlu dibenarkan
/*double hitung(double x , double d){
    double y;
    y = x * d/200;
}
int main(){
int j,k,l,h,e;
string z;
cout<<" Nama Makanan = ";
cin>>z;
cout<<" Harga Makanan = ";
cin>>j;
cout<<" Diskon makanan (%) = ";
cin>>k;
h=j-hitung(j,k);
cout<<" Harga Makanan Setelah Diskon : ";
cout<<e<<endl;
cout<<" Harga Banyaknya Makanan : ";
cin>>l;
cout<<" Total "<<e*l;
}*/
double hitung(double x , double d){//program yang benar
    double y;
    y = x * d/100;
    return y;
}
int main(){
int x,d,l,h;
string z;
cout<<" Nama Makanan = ";
getline(cin,z);
cout<<" Harga Makanan = ";
cin>>x;
cout<<" Diskon makanan (%) = ";
cin>>d;
h=x-hitung(x,d);
cout<<" Harga Makanan Setelah Diskon : ";
cout<<h<<endl;
cout<<" Banyaknya Makanan : ";
cin>>l;
cout<<" Total "<<h*l;
}