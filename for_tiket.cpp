#include <iostream>
using namespace std;
int main(){
    int n,m,b;
    cout <<"\n\tPENJUALAN TIKET KONSER"<<endl;
    cout <<"\nMasukkan jumlah data pembeli tiket VIP : ";
    cin>>n;
    for (b=1;b<=n;b++){
        cout<<"Pembelian ke- "<<b<<" = ";cin>>m;
    }
    cout<<endl;
    cout <<"\nMasukkan jumlah data pembeli tiket PLATINUM : ";
    cin>>n;
    for (b=1;b<=n;b++){
        cout<<"Pembelian ke- "<<b<<" = ";cin>>m;
    }
    cout<<endl;
    cout <<"\nMasukkan jumlah data pembeli tiket GOLD : ";
    cin>>n;
    for (b=1;b<=n;b++){
        cout<<"Pembelian ke- "<<b<<" = ";cin>>m;
    }
    cout<<endl;
}