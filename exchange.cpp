#include <iostream>
using namespace std;

int main (){
    int data [6]={84,69,58,46,94,91};
    int tanda ;
    cout<<"Data awal : ";
    for (int x=0 ; x<6;x++){
        cout<<data[x]<<" ";
    }
    cout<<endl<<endl;
    for (int b=0;b<5;b++){fi
        cout<< "Proses "<<b+1<<" = ";
        for (int a=b;a<5;a++){
            if (data [b]>=data [a+1]){
                tanda =data[b];
                data [b]=data[a+1];
                data [a+1]=tanda;
            }
        }
        for (int a=0;a<6;a++){
            cout<<data[a]<<" ";
        }
        cout<<endl;
    }
     cout<<endl;
    cout<<"Data yang diurutkan : ";
    for (int x=0;x<6;x++){
        cout<<" "<<data [x];
    
    }
}