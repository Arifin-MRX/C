#include <iostream>
using namespace std;
double hitung(double x , double d){
    double y;
    y = x * d/100;
    return y;
}
int main(){
int d,x,l,h;
string Z;
cout<<" Nama Makanan : ";
getline(cin,Z);
cout<<" Harga Makanan : ";
cin>>x;
cout<<" Diskon makanan (%) : ";
cin>>d;
h=x-hitung(x,d);
cout<<" Harga Makanan Setelah Diskon : ";
cout<<h<<endl;
cout<<" Harga Banyaknya Makanan : ";
cin>>l;
cout<<" Total "<<h*l;
return 0;
}