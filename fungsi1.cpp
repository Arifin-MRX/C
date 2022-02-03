#include <iostream>
#define phi 3.14

using namespace std;

double j; //Variabel Global

//Procedure
void input(){
    cout<<"Masukan nilai jari-jari: ";cin>>j;
    cout<<"---------------------------------------------\n";
}

//luas lingkaran
double luasLingkaran(){
    double luas;    //Variable Lokal
    luas=phi*j*j;   //Melakukan Proses Perhitungan
    return luas;    //Mengembalikan nilai
    }

//keliling lingkaran
double kelilinglingkaran(  int d = 5 ){
    double keliling;
    keliling = phi*d;
    return keliling;
}

int main(){
    cout<<"=============================================\n";
    cout<<"||                                         ||\n";
    cout<<"||       MENGHITUNG LUAS LINGKARAN         ||\n";
    cout<<"||                                         ||\n";
    cout<<"||                    Procedure & Function ||\n";
    cout<<"=============================================\n";
    input(); //Memanggil Procedure

    //Menampilkan hasil dan memanggil fungsi
    cout<<"Luas Lingkaran Adalah : "<<luasLingkaran();cout<<endl;
    cout<<"---------------------------------------------\n";

    //menampilkan hasil keliling lingkaran
    cout << "Keliling lingkaran : " <<kelilinglingkaran();cout<<endl;
    cout<<"---------------------------------------------\n";
}
