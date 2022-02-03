#include <iostream>
using namespace std;
void persegi(int panjang, int lebar){
	for(int x=1;x<=panjang;x++){
		for(int y=1;y<=lebar;y++){
			cout<<x<<" ";
		}
			cout<<endl;
	}
}

int main(){
	int panjang,lebar;
	cout<<"=====Membuat Persegi Panjang Bilangan====="<<endl;
	cout<<"Masukkan Panjang : ";
	cin>>panjang;
	cout<<"Masukkan Lebar :";
	cin>>lebar;
	cout<<"------------------------"<<endl;
	persegi(panjang,lebar);
}
