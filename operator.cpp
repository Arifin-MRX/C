#include<iostream>

using namespace std;

main()
{
    int pilihan;
    cout << "selamat datang di program calculator" ;
    cout<<"\n[1] Penjumlaha "<<endl;
    cout<<"[2] perkalian "<<endl;
    cout<<"[3] pengurangan "<<endl;
    cout<<"[4] pembagian "<<endl;
    cout<<"\nmasukkan pilihan anda : ";
    cin>>pilihan;


      if (pilihan==1)

      {
            int nilai1,nilai2, hasil;
            cout<<"\nmasukkan nilai pertama : " ;
            cin>>nilai1;
            cout<<"masukan nilai kedua : " ;
            cin>>nilai2;
            hasil = nilai1+nilai2;
            cout<<"hasil penjumlahan :"<<hasil;
      }
      else if (pilihan==2)
      {
            int nilai1,nilai2,hasil;
            cout<<"\nmasukkan nilai pertama : " ;
            cin>>nilai1;
            cout<<"masukan nilai kedua : " ;
            cin>>nilai2;
            hasil = nilai1*nilai2;
            cout<<"hasil perkalian :"<<hasil ;
      }
      else if (pilihan==3)
      {
            int nilai1,nilai2,hasil;
            cout<<"\nmasukkan nilai pertama : " ;
            cin>>nilai1;
            cout<<"masukan nilai kedua : " ;
            cin>>nilai2;
            hasil = nilai1-nilai2;
            cout<<"hasil pengurangan :"<<hasil;
      }
      else if (pilihan==4)
      {
            int nilai1,nilai2,hasil;
            cout<<"\nmasukkan nilai pertama : " ;
            cin>>nilai1;
            cout<<"masukan nilai kedua : " ;
            cin>>nilai2;
            hasil = nilai1/nilai2;
            cout<<"hasil pembagian:"<<hasil;
      }

    }


