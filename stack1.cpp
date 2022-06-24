#include <iostream>
using namespace std;

int maks = 3;
string tumpukan [3];
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
void push (string data){
    if (isfull()==false){
        tumpukan [top]=data;
        top ++;
        cout<<"Data "<<data<<" dimasukkan kedalam stack" <<endl<<endl;
    }else {
        cout<<"Stack telah penuh !!! "<<endl<<endl;
    }
}

//pop/hapus data ke dalam stack
void  pop (){
    if (isempty() == false){
        tumpukan  [top-1]="";
        top--;
        cout<<"Data telah di hapus"<<endl;
        cout<<"--------------------------------"<<endl;
    }
}

//hapus semua data
void destroy (){
    if (isempty()== false){
        for(int i=maks-1;i<=0;i--){
            cout<<"---------"<<endl;
            if (tumpukan[i]==" "){
                cout<<"kosong";
            }
            top=0;
        }
    }
}

//menampilkan semua data data
void print (){
    cout<<"Isi stack :"<<endl<<endl;
    for (int i=maks-1;i>=0;i--){
        cout<<"------------"<<endl;
        if (tumpukan [i]==""){
            cout <<"Kosong";
        }
        cout<<tumpukan[i]<<endl;
    }
    cout<<"------------"<<endl;
    cout<<endl;
}

int main (){
    int pil;
    string data;
    do
    {
        cout<<"Selamat data di aplikasi stack "<<endl;
        cout<<"1. PUSH (input)"<<endl;
        cout<<"2. POP (hapus)"<<endl;
        cout<<"3. Display (Menampilkan)"<<endl;
        cout<<"4. Delete (Hapus)"<<endl;
        cout<<"5. Exit "<<endl;
        cout<<"Maukkan pilihan : ";cin>>pil;
        cout<<"-----------------------------------------"<<endl;
        switch (pil){
            case 1:
                cout<<"Masukkan data : "; cin>>data;
                cout<<"-------------------------------------"<<endl;
                push (data);
            break;
            case 2:
                pop ();
            break;
            case 3 :
                print ();
            break;
            case 4 :
                destroy ();
            break;

        }
       
    }
     while (pil!=5);
        cout<<"Terima Kasih "<<endl;
        cout<<"---------------------------------------"<<endl;
        return 0;
}