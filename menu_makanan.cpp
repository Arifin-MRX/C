#include <iostream>
using namespace std;

int main(){
        cout<<"\n--------------------------------";
        cout<<"\nMENU MAKANAN WARUNG BISMILLAH";
        cout<<"\n--------------------------------";
        cout<<"\n1. Ayam bakar : 10000";
        cout<<"\n2. Ayam goreng : 10000";
        cout<<"\n3. Air mineral : 5000";
        cout<<"\n--------------------------------";
        int m;
        cout<<endl;
        cout<<"\nMasukkan menu yang anda inginkan : ";
        cin>>m;
            if(m==1){
        int j,h;
        cout<<"Berapa Ayam bakar yang anda inginkan : ";
        cin>>j;
        h=j*10000;
        cout<<"\ntotal ayam bakar anda adalah "<<h;
        }else if(m==2){
        int a,h2;
        cout<<"Berapa Ayam bakar yang anda inginkan : ";
        cin>>a;
        h2=a*10000;
        cout<<"\ntotal ayam goreng anda adalah "<<h2;
     }else if(m==3){
        int b,h3;
        cout<<"Berapa Ayam bakar yang anda inginkan : ";
        cin>>b;
        h3=b*5000;
        cout<<"\ntotal ayam bakar anda adalah "<<h3;
     }else{
        cout<<"MAAF MENU YANG ANDA TUJU TIDAK FALID";
        }
    
    return 0;
}