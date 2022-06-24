#include <iostream>
using namespace std;


int main (){
    int jumlah, pilih;
    int tanda ;
    cout<<"======================================"<<endl;
    cout<<"Banyak data : ";
    cin>>jumlah;
    cout<<"======================================"<<endl;
    int data [jumlah];
    for (int banyak=1;banyak<=jumlah;banyak++){
        cout<<"Masukkan data ke-"<<banyak<< " : ";
        cin>>data [banyak];
        data [jumlah]=data [banyak];

    }
    cout<<endl;
    cout<<"Data awal : ";
    for (int x=1 ; x<=jumlah;x++){
        cout<<data[x]<<" ";
    }

    do {
            cout<<endl;
            cout<<"======================================"<<endl;
            cout<<"Sorting secara ? \n";
            cout<<"1. Ascending \n";
            cout<<"2. Descending \n";
            cout<<"3. Axit \n";
            cout<<"======================================"<<endl;
            cout<<"Masukkan pilihan (1/2) : ";cin>>pilih;
            cout<<"======================================"<<endl;
            switch (pilih)
            {
                case 1 :
                    //melakukan pemprosesan asceding exchange sort
                    cout<<endl<<endl;
                        for (int b=1;b<=jumlah-1;b++){
                            cout<< "Proses "<<b<<" = ";
                                //perulangan untuk mencari hasil dari sebuah proses
                                for (int a=b;a<jumlah;a++){
                                    //kondisi yang akan melakukan perurutan perpidahan data dengan ascending
                                        if (data [b]>=data [a+1]){
                                            tanda =data[b];
                                            data [b]=data[a+1];
                                            data [a+1]=tanda;
                                        }
                                   }
                            //menampilkan hasil dari proses yang pertama hingga yang terakhir
                            for (int a=1;a<=jumlah;a++){
                            cout<<data[a]<<" ";
                            }
                            cout<<endl;
                        }
                    cout<<endl;
                    //hasil dari pemprosesan yang terakhir atau menampilkan hasil data dari hasil proses exchange
                    cout<<"Hasil shorting : ";
                    for (int x=1;x<=jumlah;x++){
                        cout<<" "<<data [x];
            
                        }
                break;
                case 2 :
                    //melakukan pemprosesan desceding exchange sort
                    cout<<endl<<endl;
                        for (int b=1;b<=jumlah-1;b++){
                            cout<< "Proses "<<b<<" = ";
                                //perulangan untuk mencari hasil dari sebuah proses
                                for (int a=b;a<=jumlah-1;a++){
                                    //kondisi yang akan melakukan perurutan perpidahan data dengan descending
                                        if (data [b]<=data [a+1]){
                                            tanda =data[b];
                                            data [b]=data[a+1];
                                            data [a+1]=tanda;
                                        }
                                    }
                            //menampilkan hasil dari proses yang pertama hingga yang terakhir
                            for (int a=1;a<=jumlah;a++){
                            cout<<data[a]<<" ";
                            }
                            cout<<endl;
                        }
                    cout<<endl;
                    //hasil dari pemprosesan yang terakhir atau menampilkan hasil data dari hasil proses exchange
                    cout<<"Hasil shorting : ";
                    for (int x=1;x<=jumlah;x++){
                        cout<<" "<<data [x];
                        }
                break;
            }
            
        }
        while (pilih!=3);
        cout<<"Terima kasih"<<endl;
        cout<<"---------------------------------------"<<endl;
        return 0;

}