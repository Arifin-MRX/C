#include <iostream>
using namespace std;
int main() 
{
	int pilihan, hari, total, pembayaran, b, kembalian, pajak;
	cout<<"\n\tPILIHAN TIPE KAMAR";
	cout<<"\n1. Standart Room";
    cout<<"\n2. Duluxe Room";
    cout<<"\n3. Suite Room";
	//Pajak 10%
    cout<<"\nmasukkan pilihan :";
    cin>>pilihan;
	switch (pilihan)
	{
    	case 1:   
    		cout<<"\nSTANDART ROOM";
			cout<<"\n===============";
			cout<<"\nMasukkan jumlah  hari :";
			cin>>hari;
			total = hari*150000;
			pajak =total*0.1;
			pembayaran=total+pajak;
			cout<<"Total :"<<pembayaran;
			cout<<"\nMasukkan pembayaran Rp.";
			cin>>b;
			kembalian =b-pembayaran;
			cout<<"\n-----------------------------------";
			cout<<"\n Kembalian anda adalah Rp."<<kembalian;
			cout<<"\n-----------------------------------";
    		break;
		case 2:   
    		cout<<"\nDULUXE ROOM";
			cout<<"\n===============";
			cout<<"\nMasukkan jumlah  hari :";
			cin>>hari;
			total = hari*300000;
			pajak =total*0.1;
			pembayaran=total+pajak;
			cout<<"Total :"<<pembayaran;
			cout<<"\nMasukkan pembayaran Rp.";
			cin>>b;
			kembalian =b-pembayaran;
			cout<<"\n-----------------------------------";
			cout<<"\n Kembalian anda adalah Rp."<<kembalian;
			cout<<"\n-----------------------------------";

    		break;
		case 3:   
    		cout<<"\nSUITE ROOM";
			cout<<"\n===============";
			cout<<"\nMasukkan jumlah  hari :";
			cin>>hari;
			total = hari*500000;
			pajak =total*0.1;
			pembayaran=total+pajak;
			cout<<"Total :"<<pembayaran;
			cout<<"\nMasukkan pembayaran Rp.";
			cin>>b;
			kembalian =b-pembayaran;
			cout<<"\n-----------------------------------";
			cout<<"\n Kembalian anda adalah Rp."<<kembalian;
			cout<<"\n-----------------------------------";

    		break;
		default : 
			cout<<"tidak ada pilihan";
			cout<<"\n=================";

	}
	return 0;
}
