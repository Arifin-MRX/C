#include <iostream>
using namespace std;

void Perulangan(int tgl,string bln,int thn ,int perul){
	int tanggal;
	for(int i=1,tanggal=tgl; i<=perul;i++,tanggal++){
		cout<<tanggal<<"-"<<bln<<"-"<<thn<<endl;
	}
}tb
int main(){
	int tgl,thn,perul;
	string bln;
	cout<<" Masukkan Tanggal :";
	cin>>tgl;
	cout<<" Masukkan bulan :";
	cin>>bln;
	cout<<" Masukkan Tahun :";
	cin>>thn;
	cout<<"-------------------------------"<<endl;
	cout<<"Masukkan Banyak Perulangan : ";
	cin>>perul;
	Perulangan(tgl,bln,thn,perul);
}
