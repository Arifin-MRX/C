#include <iostream>
using namespace std;

int main (){

    int data;
    //input banyak data
    cout<<"======================================"<<endl;
    cout<<"Banyak data : ";
    cin>>data;
    cout<<"======================================"<<endl;
    int list [data];

    // perulangan inputan data
    for (int banyak=1;banyak<=data;banyak++){
        cout<<"Masukkan data ke-"<<banyak<< " : ";
        cin>>list [banyak];
        list [data]=list [banyak];

    }
    //tampilan data yang inputkan
    cout<<"======================================"<<endl;
    cout<<"Data Awal : ";
    for (int d=1;d<=data;d++){
        cout<<" "<<list[d];
    }
    cout<<endl;
    cout<<"======================================"<<endl;

    int temp;
//proses perurutan
    cout<<"\n\n";
    for (int i=1;i<=data-1;i++){
        cout<<"Proses ke "<<i<<" = ";
        for (int x=1;x<data;x++){
            if (list [x]>=list[x+1]){
                temp=list[x];
                list[x]=list[x+1];
                list [x+1]=temp;
            }
        }
        for (int y=1;y<=data;y++){
            cout<<" "<<list [y];
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Data yang diurutkan : ";
    for (int d=1;d<=data;d++){
        cout<<" "<<list [d];
    }
}