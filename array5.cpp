#include <iostream>
using namespace std;
int main(){
    int b,a;
    string nama[10],status[10];
    int nilai[10],nim[10];
    cout<<"Masukkan banyak data = ";
    cin>>a;
    cout<<endl;
    for (b=0; b<a;b++){
        cout<<"Data ke-"<<b;
        cout<<"\n-------------";
        cout<<endl;
        cout<<"Masukkan nama : ";
        fflush(stdin); //buat clear input buffer
        getline(cin,nama[b]);
        cout<<"Masukkan nim : ";
        cin>>nim[b];
        cout<<"Masukkan nilai : ";
        cin>>nilai[b];
        if(nilai[b]>=90 && nilai[b]<=100){
          status[b]="A";
        }else if (nilai[b]>=80 && nilai[b]<=90){
            status[b]="B";
        }else if (nilai[b]>=70 && nilai[b]<=80){
            status[b]="C";
        }else if (nilai[b]<70){
            status[b]="D";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"\n\t\tDATA MAHASISWA";
    cout<<"\n\t===================================";
    cout<<endl;
    cout<<"\n----------------------------------------------------------------";
    cout<<"\n NO    NAMA \t NIM \t\tNILAI \t STATUS";
    cout<<"\n================================================================"<<endl;
    for (int i = 0; i < a; i++)
    {
        cout<<" "<<i<<"   "<<nama[i]<<"\t "<<nim[i]<<"\t"<<nilai[i]<<"\t"<<status[i]<<endl;
        cout<<"--------------------------------------------------------------"<<endl;
    }
    
}