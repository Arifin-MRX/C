#include <iostream>
using namespace std;
int main(){
    int a,data [a];
    int b;
    int index;
    int ketemu,i;
    cout<<"\nMasukka bayank Data = ";
    cin>>a;
    for (index= 0; index< a; index++)
    {
        cout<<"Data index "<<index<< " : ";cin>>data[index];
    }
    cout<<endl;
    cout << "Input angka yang akan dicari: ";
    cin >> b;
    //proses pencarian array
    for( i = 0; i < a; i++){
    if(b == data[i]){
      ketemu=1;
      
    }else{
        ketemu=0;
    }
    }
    if(ketemu==1){
      cout << "Angka ditemukan pada index ke-" << i;
      
    }else{
        cout<<"angka tidak di temukan"<<endl;
        }
  cout << endl;
  return 0;
}

/*#include <iostream>

using namespace std;

int main()
{
    int banyakData, cariData, posisi=0;
    bool ketemu = false;

    cout << "Banyak data : ";
    cin >> banyakData;

    int data[banyakData];

    for(int ulang=0; ulang<banyakData; ulang++)
    {
        cout <<"Berikan Data ke["<<ulang<<"] : ";
        cin >> data[ulang];
    }

    cout <<"Data yang akan di cari posisinya: ";
    cin >> cariData;

    for(int ulang=0; ulang<banyakData; ulang++)
    {
        if(cariData == data[ulang])
        {
            posisi = ulang;
            ketemu = true;
            cout<<"cc "<<ulang;
            break;
        }
    }
}
#include <iostream>
using namespace  std;
int main(){
    int a;
    int min,max,i;
    int index;
    cout<<"\nMasukkan banyak data = ";
    cin>>a;
    int data [a];
    for (index= 0; index < a; index++)
    {
        cout<<"Tinggi bada mahasiswa ke-"<<index<<" = ";cin>>data[index];
    }
    cout<<endl;
    cout<<"\nData tinggi bahdan mahasiswa semester 1 "<<endl;
    for (index= 0; index < a; index++)
    {
        cout<<"Tinggi Bada mahasiswa ke-"<<index<<" = "<<data[index]<<endl;
    }
    max=data[0];
    for(i=0; i<a; i++){
        if ( data[i]>max)  //pemilihan nilai terbesar 
        {
        max = data [i];
        }
        else 
        {
            min = data [i];
            
        } 
       
    }
    cout << "\nNilai terbesar adalah : " << max << endl;  
    cout << "Nilai terkecil adalah : "  << min << endl; 
    
}
*/
/*#include <iostream>
using namespace std;
int main(){
    int jumlah,batas,index;
    cout<<"\nMasukkan banyak data = ";
    cin>>jumlah;
    cout<<"Masukkan batas nilai = ";
    cin>>batas;
    int data[jumlah] ;
    cout<<endl;
    for (index = 0; index < jumlah; index++)
    {
        cout<<"Masukkan nilai ke-["<<index<<"] = ";cin>>data[index];
    }
    cout<<"\nMenampilkan nilai di atas "<<batas<<" :";
    cout<<endl;
    for(int i=0; i<jumlah; i++){
            if ( data[i]>=batas)  //pemilihan nilai lebih besar
         {
         cout<<"\nNilai index ke-["<<i<<"] = "<<data[i];
        }
       
    }
    
    return 0;
    
}*/