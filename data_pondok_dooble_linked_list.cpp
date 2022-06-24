# include <iostream>
using namespace std;
// Deklarasi Double Linked List
struct DataMhs{
    string nama,kode,jenis,angkatan;

    DataMhs *prev;
    DataMhs *next;
};
    float prev=0 ,next=0;
void garis(){
    cout<<"_______________________________________"<<endl;
}

DataMhs *head, *tail, *currently, *newnode, *del;
// Fungsi Membuat Node awal
void createdoublelinked(string data[4]){
    head = new DataMhs();
    head -> nama = data[0];
    head -> kode = data[1];
    head -> jenis = data[2];
    head -> angkatan = data[3];
    head -> prev = NULL;
    head -> next = NULL;
    tail = head;
}

//Fungsi mencetak double linked list
void printdoublelinked(){
    if (head == NULL){
        cout<<"Double linked list belum ada";
    }else{
        cout<<"Cetak Data : "<<endl;
        currently = head;
        while(currently != NULL){
            cout<<endl<<endl;
            cout<<"\t\tAlamat Node : "<<currently<<endl;
            cout<<"_____________________________________________________________________"<<endl;
			cout<<"|"<<currently->prev<<"|";
            cout<<"\t   Nama    : "<<currently -> nama ;
            cout<<"\t\t|"<<currently->next<<"|"<<endl;
            cout<<"\t\t|  Kode kamar    : "<<currently -> kode <<"\t|"<<endl;
            cout<<"\t\t|  jenis kelamin : "<<currently -> jenis <<"\t|"<<endl;
            cout<<"\t\t|  angkatan      : "<<currently ->angkatan<<"\t\t|"<<endl ;
            cout<<"_____________________________________________________________________"<<endl;
            garis();
            currently = currently -> next;
        }
    }
}

//Fungsi tambah dari depan
void addfirst(string data[4]){
    if (head == NULL){
    cout<<"Double linked list belum ada";
    }else{
        newnode = new DataMhs();
        newnode -> nama = data[0];
        newnode -> kode = data[1];
        newnode -> jenis = data[2];
        newnode -> angkatan = data[3];
        newnode -> prev = NULL;
        newnode -> next = head;
        head->prev = newnode;
        head = newnode;
    }
}

//Fungsi tambah dari belakang
void addlast(string data[4]){
    if (head == NULL){
    cout<<"Double linked list belum ada";
    }else{
        newnode = new DataMhs();
        newnode -> nama = data[0];
        newnode -> kode = data[1];
        newnode -> jenis = data[2];
        newnode -> angkatan = data[3];
        newnode -> prev = tail;
        newnode -> next = NULL;
        tail->next = newnode;
        tail = newnode;
    }
}

//Fungsi hapus dari depan
void removefirst(){
    if(head == NULL){
    cout<<"Double linked list belum ada";
    }else{
        del = head;
        head = head->next;
        head->prev = NULL;
        delete del;
    }
}

//Fungsi hapus dari belakang
void removelast(){
    if(head == NULL){
    cout<<"Double linked list belum ada";
    }else{
        del = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete del;
    }
}


int main (){
    int pilihan,  pilihan2;
    string newdata [4];
    string nama,kode,jenis,angkatan;
    do
    {
        cout<<endl;
        cout<<"| 2118131 |     Mohammad harifin      |"<<endl;
        garis();
        cout<<"|  Selamat Datang di Pondok Pesantren |"<<endl;
        cout<<"|  1. Buat double linked list         |"<<endl;
        cout<<"|  2. Keluar                          |"<<endl;
        garis();
        cout<<"Masukkan pilihan : ";
        cin>>pilihan;
        cout<<endl<<endl;
        if (pilihan == 1 )
		{
            cout<<"Masukkan Nama               : ";
            cin>>nama;
            newdata[0]=nama;
            cout<<"Masukkan Kode kamar (G.L.R) : ";
            cin>>kode;
            newdata[1]=kode;
            cout<<"Jenis Kelamin (L/P)         : ";
            cin>>jenis;
            newdata[2]=jenis;
            cout<<"Angkatan                    : ";
            cin>>angkatan;
            newdata[3]=angkatan;
            createdoublelinked(newdata);
            cout<<"Selamat...Anda telah membuat double linked list "<<endl;
            do
            {
                cout<<endl;
                cout<<"| 2118131 |    Mohammad harifin      |"<<endl;
                garis();
                cout<<"| Double lingked list                |"<<endl;
                cout<<"| 1. AddFirst                        |"<<endl;
                cout<<"| 2. AddLast                         |"<<endl; 
                cout<<"| 3. RemoveFirst                     |"<<endl;              
                cout<<"| 4. RemoveLast                      |"<<endl;
                cout<<"| 5. Cetak                           |"<<endl;
                cout<<"| 6. Keluar                          |"<<endl;
                garis();
                cout<<"Masukkan Pilihan anda : ";
                cin>>pilihan2;
                if (pilihan2==1)
                {
                    cout<<"Tambahkan Node dari depan " <<endl;
                    garis();
                    cout<<"Masukkan Nama               : ";
                    cin>>nama;
                    newdata[0]=nama;
                    cout<<"Masukkan Kode kamar (G.L.R) : ";
                    cin>>kode;
                    newdata[1]=kode;
                    cout<<"Jenis Kelamin (L/P)         : ";
                    cin>>jenis;
                    newdata[2]=jenis;
                    cout<<"Angkatan                    : ";
                    cin>>angkatan;
                    newdata[3]=angkatan;
                    addfirst (newdata);
                }else if (pilihan2 == 2)
                { 
                    cout<<"Tambahkan Node dari belakang "<<endl ;
                    garis();
                    cout<<"Masukkan Nama               : ";
                    cin>>nama;
                    newdata[0]=nama;
                    cout<<"Masukkan Kode kamar (G.L.R) : ";
                    cin>>kode;
                    newdata[1]=kode;
                    cout<<"Jenis Kelamin (L/P)         : ";
                    cin>>jenis;
                    newdata[2]=jenis;
                    cout<<"Angkatan                    : ";
                    cin>>angkatan;
                    newdata[3]=angkatan;
                    addlast (newdata);
                }
                else if (pilihan2 == 3)
                {
                     removefirst();
                }
                else if (pilihan2 == 4)
                {
                     removelast();
                }
                else if (pilihan2 == 5)
                {
                    printdoublelinked();
                }
                else if (pilihan2 == 6)
                {
                    cout<<"Keluar dari program";
                }
                else 
                {
                    cout<<"Pilihan tidak tersedia... \n\n";
                }
                

            } while (pilihan2!=6);
            
		}
		else if (pilihan == 2)
		{
			cout<<"Keluar dari program";
		}
		else
		{
			cout<<"Pilihan tidak tersedia... \n\n";
		}
    } while (pilihan !=2);
    
}