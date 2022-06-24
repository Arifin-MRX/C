# include <iostream>
using namespace std;
// Deklarasi Double Linked List
struct DataMhs{
    string nama, nim, kelas;
    DataMhs *prev;
    DataMhs *next;
};

DataMhs *head, *tail, *currently, *newnode, *del;

// Fungsi Membuat Node awal
void createdoublelinked(string data[3]){
    head = new DataMhs();
    head -> nama = data[0];
    head -> nim = data[1];
    head -> kelas = data[2];
    head -> prev = NULL;
    head -> next = NULL;
    tail = head;
}

//Fungsi mencetak double linked list
void printdoublelinked(){
    if (head == NULL){
        
    }else{
        cout<<"Isi Data : "<<endl;
        currently = head;
        while(currently != NULL){
            cout<<"Nama : "<<currently -> nama <<endl;
            cout<<"Nim : "<<currently -> nim <<endl;
            cout<<"Kelas : "<<currently -> kelas<< endl <<endl;
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
        newnode -> nim = data[1];
        newnode -> kelas = data[2];
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
        newnode -> nim = data[1];
        newnode -> kelas = data[2];
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


int main(){
    //membuat node baru
    string newdata[3] = {"Suahartina Sapose",
    "981023832", "A"};
    createdoublelinked(newdata);
    printdoublelinked();
    //penambahan node dari depan
    string data2[3] = {"Kodina Fuzi", "981572386",
    "B"};
    addfirst(data2);
    printdoublelinked();
    string data3[4] = {"Daytalulah Suksis","981143946", "C"};
    addlast(data3);
    printdoublelinked();
    removefirst();
    removelast();
    printdoublelinked();
}
