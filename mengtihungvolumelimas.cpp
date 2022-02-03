#include <iostream>

using namespace std;

int main(){
    float alas, tinggi, v;
    cout<<"\t\t==================================\n";
    cout<<"\t\t Program Perhitungan Volume Limas \n";
    cout<<"\t\t==================================\n";
    cout<<endl;
    cout<<endl;
    cout<<"\nMasukkan Luas Alas (cm) : ";
    cin>>alas;
    cout<<"\nMasukkan Tinggi (cm) : ";
    cin>> tinggi;
    v=(alas*tinggi)*1/3;
    cout<<"\nJadi Volume Limas Tersebut Adalah "<<v<<" cm";


}
