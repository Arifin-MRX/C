#include <iostream>
using namespace std;

int main (){

    string  nama,  hobi, asal, usia;

    cout << "\tMASUKKAN BIODATA ANDA\n";
    cout << "Masukkan nama anda :";
    getline (cin,nama);
    cout << "Masukkan usia anda :";
    getline (cin,usia);
    cout << "Masukkan asal anda :";
    getline (cin,asal);
    cout << "Masukkan hobi anda :";
    cin >> hobi;

    cout << "\tHASIL BIODATA ANDA \n";
    cout <<"\t====================\n";
    cout <<"nama\t:"<<nama<<endl;
    cout<<"usia\t:"<<usia<<endl;
    cout<<"asal\t:"<<asal<<endl;
    cout<<"hobi\t:"<<hobi<<endl;

return 0;
}
