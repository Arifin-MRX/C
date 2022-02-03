//Program dari tugas
/*#include <iostream>
using namespace std;

int main(){
    cout<<"\tProgram menentukan hari dan seragam SMA Garuda"<<endl<<endl;
    cout<<"Masukkan Angka : ";cin>>hari;
    case (hari)
    {
        switch 1 ... 2 :
        cout<<"Hari seni dan selasa menggunakan seragam putih abu-abu";
        cout<<endl;
        switch 3 ... 4 :
        cout<<"Hari rabu dan kamis menggunakan seragam batik";
        cout<<endl;
        switch 5:
        cout<<"Hari jum'at menggunakan seragam pramuka";
        cout<<endl;
        default:
        cout<<"pilihan tidak tersedia";
    }
    return 0;
}*/
#include <iostream>
using namespace std;

int main(){
    int hari;
    cout<<"\tProgram menentukan hari dan seragam SMA Garuda"<<endl<<endl;
    cout<<"Masukkan Angka : ";cin>>hari;
    switch (hari)
    {
        case 1 ... 2 :
        cout<<"Hari seni dan selasa menggunakan seragam putih abu-abu";
        cout<<endl;
   
        case 3 ... 4 :
        cout<<"Hari rabu dan kamis menggunakan seragam batik";
        cout<<endl;

        case 5:
        cout<<"Hari jum'at menggunakan seragam pramuka";
        cout<<endl;

        default:
        cout<<"pilihan tidak tersedia";

    }
    return 0;
}