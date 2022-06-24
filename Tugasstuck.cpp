#include <iostream>
using namespace std;

int maks = 3;
string tumpukan [3][3];
int top = 0;

// cek apakah stack penuh 
bool isfull (){
    if (top == maks ){
        return true;
    }else {
        return false;
    }
}

// cek apakah stack kosong
bool isempty (){
    if (top == 0 ){
        return true;
    } else {
        return false;
    }
}

//push/input data dalam stack
void push (string data, string nim, string angkatan){
    if (isfull()==false){
      for (int input =0;input<=3;input++){
          if (input ==0){
              tumpukan [top][input]=data;
          }else if (input ==1){
              tumpukan [top][input]=nim;
          }if (input ==2){
              tumpukan [top][input]=angkatan;
          }
        }
        top ++;
        cout<<"Data "<<data<<" dimasukkan kedalam stack" <<endl<<endl;
    }else {
        cout<<"Stack telah penuh !!! "<<endl<<endl;
    }
}

//pop/hapus data ke dalam stack
void  pop (){
    if (isempty() == false){
        for(int x=0 ; x<3;x++){
             tumpukan  [top-1][x]="";
         }
        
        top--;
        cout<<"Data telah di hapus"<<endl;
        cout<<"--------------------------------"<<endl;
    }
}

//hapus semua data

void clear(){
	if(isempty()==false){
		for(int i = maks-1; i>=0; i--){
			for(int x=0 ; x<3;x++){
             tumpukan[i][x]= "";
         }
		}
		top=0;
        cout<<endl;
        cout<<"-----------------------------"<<endl;
        cout<<"Semua data berhasil di Hapus "<<endl;
        cout<<"-----------------------------"<<endl;
        cout<<endl;
	}
}

//menampilkan semua data data
void print (){
    cout<<"Isi stack :"<<endl<<endl;
    for (int i=maks-1;i>=0;i--){
        cout<<"------------"<<endl;
        if (tumpukan [i][0]==""){
            cout <<"Kosong"<<endl;
        }
         for(int x=0 ; x<3;x++){
             cout<<tumpukan[i][x]<<endl;
         }

    }
    cout<<"------------"<<endl;
    cout<<endl;
}

int main (){
    int pil;

    string data, nim, angkatan;
    do
    {
        cout<<"Selamat data di aplikasi stack "<<endl;
        cout<<"1. PUSH (input)"<<endl;
        cout<<"2. POP (hapus)"<<endl;
        cout<<"3. Display (Menampilkan)"<<endl;
        cout<<"4. Delete (Hapus)"<<endl;
        cout<<"5. Exit "<<endl;
        cout<<"Masukan pilihan : ";cin>>pil;
        cout<<"-----------------------------------------"<<endl;
        switch (pil){
            case 1:

                cout<<"Masukkan nama : "; cin>>data;
                cout<<"Masukkan NIM : "; cin>>nim;
                cout<<"Masukkan Angkatan : "; cin>>angkatan;
                //cout<<"-------------------------------------"<<endl;
                push (data,nim,angkatan);
            break;
            case 2:
                pop ();
            break;
            case 3 :
                print ();
            break;
            case 4 :
                clear();
            break;

        }
       
    }
     while (pil!=5);
        cout<<"Terima Kasih "<<endl;
        cout<<"---------------------------------------"<<endl;
        return 0;

}