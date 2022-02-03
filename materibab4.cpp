#include <iostream>
using namespace std;

int main(){
    int nilai=2118131,p=1;
    cout<<"\t=============================";
    cout<<"\n\t\tMATERI BAB IV";
    cout<<"\n\t============================="<<endl;
    cout<<"\nMasukkan nim anda : ";
    cin>>nilai;
    p = nilai;
    switch (p)
    {
    case 2118131:
        cout<<"Mohammad Harifin";
        break;
    
    default:
        cout<<"tidak terdaftar dalam kampus";
        break;
    }
    cout<<"\n============================="<<endl;
}