#include <iostream>
using namespace std;
const float c = 3.14;
void hitung(float r){
	float hasil;
	hasil= 1.333333 * c  * (r*r*r);
	cout<<"Volume Bola Dengan Jari-Jari "<<r<<" adalah "<<hasil;
}
int main(){
	float r;
	cout<<"=====Menghitung Volume Bola====="<<endl;
	cout<<"MASUKKAN JARI-JARI : ";
	cin>>r;
	hitung(r);
	
}
