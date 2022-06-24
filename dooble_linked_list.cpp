#include <iostream>
using namespace std;
// Deklarasi double linked list
struct DataMhs{
    string nama, nim, kelas;
    DataMhs *prev;
    DataMhs *next;
};

//ingat kode ini ada di dalam main()
//Disini kita buat 2 buah node
 int main(){
    //Inisialisasi Double Linked List
    DataMhs *node1, *node2;
    node1 = new DataMhs();
    node2 = new DataMhs();

    //Memberi Nilai Variabel Pada Node1
    //letakkan kode ini dibawah inisialisasi
    //disini kita akan masukkan data mahasiswa
    node1->nama = "Suahartina Sapose";
    node1->nim = "981023832";
    node1->kelas = "A";
    node1->prev = NULL;
    node1->next = node2;

    //Memberi Nilai Variabel Pada Node2
    //letakkan kode ini dibawah node1
    node2->nama = "Kodina Fuzi";
    node2->nim = "981572386";
    node2->kelas = "B";
    node2->prev = node1;
    node2->next = NULL;

    //Mencetak Double Linked List
    //Letakkan kode ini dibawah node2
    //variabel pembantu yang dibuat adalah currently
    //dengan tipe data DataMhs
    DataMhs *currently;
    currently = node1;
    while(currently != NULL){
        cout<<"Nama : "<<currently -> nama << endl;
        cout<<"Nim : "<<currently -> nim << endl;
        cout<<"Kelas: "<<currently -> kelas <<
        endl<<endl;
        currently = currently -> next;
    }
}
