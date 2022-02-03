#include <iostream>
using namespace std;
int main(){
    int banyak;
    int poin[10];
    string nama[10];
    cout<<"MAsukkan bannyak data : ";
    cin>>banyak;
    for (int i = 1; i <= banyak; i++)
    {
       cout<<"\nData ke-"<<i;
       cout<<"\nMasukkan nama = ";
       cin>>nama[i];
       cout<<"Masukkan poin = ";
       cin>>poin[i];
    }
    cout<<endl;
    cout<<"Grafik data ";
    cout<<"\n---------------";
    for (int a = 1; a <= banyak; a++)
    {
        cout<<"\nData ke-"<<a<<" "<<nama[a]<<" : ";
        for (int b = 1; b <= poin[a]; b++)
        {
            cout<<" *";
        }
        
    }
    cout<<endl;
    cout<<"-------------------------------------------";
    
    
}