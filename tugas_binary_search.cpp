#include <iostream>
using namespace std;
int main()
{
    int banyak,cari,tengah,tanda;
    cout<<"+================================+ \n";
    cout<<" PROGRAM BINARY SEARCHING \n";
    cout<<"+================================+ \n\n";
    //proses user input banyak index
    cout<<"Masukkan banyak index array: ";
    cin>>banyak;
    cout<<"-------------------------------\n";
    int data[banyak]; //menyimpan index yang sudah dimasukkan
    //perulangan for untuk memasukkan data yag sesuai dari index yang di tentukan
    for (int i = 0; i <= banyak; i++)
        {
            cout<<"Masukkan data ke-"<<i<< " : ";
            cin>>data [i];
            data[banyak]=data[i];//menyimpan data yang sudah di input
        }
    cout<<"Data awal : ";
    //perulangan untuk memproses data yang sudah diinput sebagai data awal
    for(int a=0; a<=banyak;a++)
            {
                cout<<data[a]<< " ";
            }
    //proses perurutan dengan menggunakan buble sort
    for (int b=0;b<banyak;b++){
        for (int a=b;a<banyak;a++){
            if (data [b]>=data [a+1]){
                // proses perpindahan data
                tanda =data[b];
                data [b]=data[a+1];
                data [a+1]=tanda;
            }
        }

    }
    cout<<endl;
    //proses menampilkan data yang sudah diurutkan
    cout<<"Data yang diurutkan : ";
    for (int x=0;x<=banyak;x++){
        cout<<" "<<data [x];
    
    }
    int kiri=0, kanan;
    kanan=banyak;
    int flag = 0;
     cout<<"\nmasukan data yang dicari : ";
     cin>>cari;
         while (kiri <= kanan && flag == 0)//mengecek data index array
            {
                tengah = (kiri + kanan)/2; //mencari nilai tengah
                if ( cari == data [ tengah ] )//mengecek data
                    {
                        flag = 1;
                        break;
                    }
                else if (cari < data[tengah])
                    {
                        kanan= tengah - 1;
                    }
                else if (cari > data[tengah] )
                    {
                        kiri = tengah + 1;
                    }
            }
    if ( flag == 1 )//kondisi jika data sudah di temukan
        {
            cout<<"\n================\n";
            cout<<"Data di temukan!\n";
            cout<<"================\n";
        }
    else
    {
        cout<<"\n================\n";
        cout<<"Data tidak temukan!\n";
        cout<<"================\n";
    }
}