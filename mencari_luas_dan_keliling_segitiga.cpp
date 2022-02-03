#include <iostream>
using namespace std;

int main(){
    char pilihan;
    cout<<"\t----------------------------------";
    cout<<"\n\t\tOPERATOR SEGITIGA";
    cout<<"\n\t----------------------------------";
    cout<<"\na. Luas segitiga ";
    cout<<"\nb. Keliling segitiga";
    cout<<"\nMasukkan menu pilihan anda : ";
    cin>>pilihan;

    if (pilihan=='a'||pilihan=='A'){
        float alas,tinggi,luas;
        cout<<"\nMasukkan alas : ";
        cin>>alas;
        cout<<"\nMasukkan tinggi : ";
        cin>>tinggi;
        luas =1/2*alas*tinggi;
        cout<<"\n Nilai luas segitiga adalah "<<alas<<endl;
    }
    if(pilihan=='b'||pilihan=='B'){
        float k,s1,s2,s3;
        cout<<"\n Masukkan sisi1 segitiga : ";
        cin>>s1;
        cout<<"\n Masukkan sisi2 segitiga : ";
        cin>>s2;
        cout<<"\n Masukkan sisi3 segitiga : ";
        cin>>s3;

        k=s1+s2+s3;
        cout<<"\nNilai keliling segitiga adalah "<<k<<endl;
    }


}