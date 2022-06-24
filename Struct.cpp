#include <iostream>
#include <cstdlib>
using namespace std;
 
struct datasiswa
{
    char nim [11], nama[50];
    int tugas, uts, uas ;
    float nilai;
   // int banyak;
};
int main(){
    datasiswa data[100];
   int banyak;
   cout<<endl;
    cout<< "Mohammad Harifin | 2118131 |kelas D \n";
    cout<<"-----------------------------------------\n";
    cout<<"Menghitung nilai akhir mahasiswa \n";
    cout<<"-----------------------------------------\n";
    cout<<"Masukan Jumlah Mahasiswa : ";cin>>banyak;
    cout<<endl;
    for ( int i = 1; i <= banyak; i++)
    {
        cout<<endl;
        cout<<"NO. "<<i<<endl;
        fflush (stdin);
        cout<<"Masukkan Nama Mahasiswa\t: ";
        gets(data[i].nama);
        cout<<"Masukan nim Mahasiswa\t: ";
        cin>>data[i].nim;
        cout<<"Masukkan nilai Tugas\t: ";
        cin>>data[i].tugas;
        cout<<"Masukkan nilai uts\t: ";
        cin>>data[i].uts;
        cout<<"Masukkan nilai UAS\t: ";
        cin>>data[i].uas;
        data[i].nilai=(data[i].uts+data[i].uas+data[i].tugas)/3;
        cout<<"Nilai akhir\t\t: "<<data[i].nilai;
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<"------------------------------------------------------------\n";
    cout<<"No\tNama\t\tNim\t\tTugas\tuts\tuas\n";
    cout<<"------------------------------------------------------------\n";
    for (int i = 1; i <= banyak; i++)
    {
        cout<<i<<"\t"<<data[i].nama<<"\t\t"<<data[i].nim<<"\t\t"<<data[i].tugas<<"\t"<<data[i].uts<<"\t"<<data[i].uas<<endl;
    }
    
    
    
}
