#include <iostream>
using namespace std;
void bilangan(int bil){
	if(bil % 2==0){
		cout<<bil<<" adalah Bilangan Genap";
	}else{
		cout<<bil<<" adalah Bilangan Ganjil";
	}
}
int main(){
	int bil;
	cout<<"=====Cek Bilangan Ganjil genap====="<<endl;
	cout<<"masukkan bilangan : ";
	cin>>bil;
	bilangan(bil);
	
}


