#include <iostream>
using namespace std;

int maxantrianarray = 5, head = -1, tail = -1;
string antrianatm[10];

bool isfull(){
    if (tail == maxantrianarray){
        return true;
    }else {
        return false;
    }
}

bool isempty(){
    if (tail == -1){
        return true;
    }else{
        return false;
    }
}

void enqueue(string data){
    if (isfull()){
        cout <<"Antrian Penuh, Tidak bisa enqueue"<<endl;
    }else{
        if(isempty()){
            antrianatm[0] = data;
            head++;
            tail++;
        }else{
            tail++;
            antrianatm[tail] = data;
            
        }
		cout<<data<<" telah dimasukkan antrian"<<endl;
    }
}

void dequeue(){
    if(isempty()){
        cout<<"Antrian kosong, Tidak bisa dequeue"<<endl;
    }else{
    	cout<<antrianatm[0];
        for(int i = 0; i < tail; i++){
            antrianatm[i] = antrianatm[i+1];
        }
        cout<<" Telah dihapus"<<endl;
        tail--;
    }
}

int count(){
    if(isempty()){
        return 0;
    }else if( isfull()){ //
        return maxantrianarray;
    }else {
        return tail+1;    
    }
}

void destroy(){
    if(isempty()){
        cout<<"Antrian kosong, Tidak bisa destroy"<<endl;
    }else{
        for(int i = 0; i < maxantrianarray; i++){
            if(tail>1){
                antrianatm[tail-1] = "";
                tail--;
            }else if (tail == 1){
                antrianatm[tail-1] = "";
                tail=-1;
                head=-1;
            }
        }
        cout<<"Antrian di destroy"<<endl;
    }
}

void display(){
    cout<<"Jumlah orang yang antri : "<<count()<<" orang."<<endl;
    cout<<"Data Antrian ATM : "<<endl;
    if(isempty()){
        cout<<"-[mesin ATM]-"<<endl;
        cout<<"Antrian Kosong"<<endl;    
    }else{
        cout<<"-[mesin ATM]-"<<endl;
        for (int i = 0; i<maxantrianarray; i++){
        if(antrianatm[i] != ""){
            cout<<i+1<<". "<<antrianatm[i]<<endl;
        }else{
            cout<<i+1<<". Kosong"<<endl;
        }
        }
    }
    cout<<endl;
}

int main(){
	int pilihan;
	string input; 
	cout<<"2118131 | MOHAMMAD HARIFIN | D"<<endl;
	kembali:
	cout<<"==========================="<<endl;
	cout<<"POSISI QUEUE"<<endl;
    cout<<"Head :"<<head<<endl;
    cout<<"Tail :"<<tail<<endl;
	cout<<"==========================="<<endl;
	cout<<"1. masukkan Data"<<endl;
	cout<<"2. Keluarkan Data"<<endl;
	cout<<"3. Kosongkan Data"<<endl;
	cout<<"4. cetak Data Data"<<endl;
	cout<<"5. Hitung banyak data"<<endl;
	
	cout<<"Silahkan Masukkan Pilihan anda : ";cin>>pilihan;
	
	switch(pilihan){
		case 1 :
			cout<<"Masukkan Nama : ";cin>>input;
			enqueue(input);
			cout<<endl;
			goto kembali;
		break;
		case 2 :
			dequeue();
			cout<<endl;
			goto kembali;
		break;
		case 3 :
			destroy();
			cout<<endl;
			goto kembali;
		break;
		case 4 :
			display();
			cout<<endl;
			goto kembali;
		break;
		case 5 :
			cout<<"Banyak data ada : "<<count()<<endl;
			goto kembali;
		break;
		default:
			cout<<"YANG ANDA MASUKKAN SALAH"<<endl;
	}
    
}