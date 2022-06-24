#include <iostream>
using namespace std;

int main ()
{
    int temp,x,j;
    int jumlah;
    cout<<endl;
    cout<<"Masukkan Jumlah data : ";cin>>jumlah;
    int data[jumlah];
    cout<<"================================\n";
    for (int x = 0; x < jumlah; x++)
    {
        cout<<"Data ke "<<x+1<<" = ";cin>>data[x];
    }

    cout<<"================================\n";
    cout<<"Data awal : ";
    for (int i= 0; i<jumlah;i++){
            cout<<data[i]<<" ";
    }
    cout<<endl;
    cout<<"================================\n";
    cout<<"Data yang telah diurutkan : "<<endl;
    cout<<"================================\n";
    cout<<"Pengurutan Ascending \n";
    cout<<"================================\n";
    for (x=1;x<jumlah;x++){
        temp = data[x];
        for (j=x-1;j>=0;j--){
            if (temp<=data[j]){
                data[j+1]=data[j];
                data[j]=temp;
                temp = data[j];
            }
        }
        cout<<"Proses "<<x<<" = ";
        for (int y=0; y<jumlah;y++){
            cout<<data[y]<<"  ";
        }
        cout<<endl;
        
    }
    cout<<"================================\n";
    cout<<"Pengurutan Descending \n";
    cout<<"================================\n";
        for (x=1;x<jumlah;x++){
        temp = data[x];
        for (j=x-1;j>=0;j--){
            if (temp>=data[j]){
                data[j+1]=data[j];
                data[j]=temp;
                temp = data[j];
            }
        }
        cout<<"Proses "<<x<<" = ";
        for (int y=0; y<jumlah;y++){
            cout<<data[y]<<"  ";
        }
        cout<<endl;
    }
        cout<<"================================\n";

}