#include <iostream>
using namespace std;
int main ()
{
     int cari,banyak,tanda;
    cout<<"+==============================+\n";
    cout<<" Program sequential Searching \n";
    cout<<"+==============================+\n";
    //proses inputan array
    cout<<"Masukkan banyak data : ";
    cin>>banyak;
    cout<<"-------------------------------\n";
    int data[banyak];//index array
    //perulangan memasukan banyak data 
    for (int i = 0; i <banyak; i++)
        {
            cout<<"Masukkan data ke-"<<i+1<< " : ";
            cin>>data [i];
            data[banyak]=data[i];
        }
    cout<<"+==============================+\n";
    int flag = 0; //inisialisasi flag
    //proses menampilkan data yang sudah diinputkan
    cout<<"Data awal : ";
    for(int a=0;a<banyak;a++)
        {
            cout<<data[a]<<" ";
        }
    cout<<endl;
    cout<<"+==============================+\n";
    //proses data yang ingin di cari
    cout<<"Masukkan data yang ingin di cari : ";cin>>cari;
    for(int x=1;x<=banyak;x++)//perulangan cek data  di cari
    {
            if(data[x]== cari)
                {
                    flag = 1;
                    break;
                }
    }
    if (flag==1)//kondisi pencarian data yang sudah di temukan
        {
            cout<<"-------------------------------\n";
            cout<<"Data di temukan!\n";
            cout<<"=================\n";
        }
    else //jika data tidak di temukan
    {
            cout<<"-------------------------------\n";
            cout<<" Data tidak temukan!\n";
            cout<<"=====================\n";
    }
}