#include <iostream>
using namespace std;
int main() 
{
	int pilihan, harga, jumlah, tiket, total, kembalian, pembayaran,b;
	cout<<"\n\tPILIHAN TIKET";
	cout<<"\n1. Film Antares";
    cout<<"\n2. Film Single";
    cout<<"\n3. Film Mariposa";
	cout<<"\nSetiap pembelian Tiket bioskop pelanggan mendapatkan diskon 10%";
    cout<<"\nmasukkan pilihan :";
    cin>>pilihan;
	switch (pilihan)
	{
    	case 1:   
    		cout<<"\nTIKET ANTRES";
			cout<<"\n===============";
			cout<<"\nMasukkan jumlah  tiket :";
			cin>>tiket;
			total = tiket*30000;
			jumlah =total*0.1;
			pembayaran=total-jumlah;
			cout<<"Total :"<<pembayaran;
			cout<<"\nMasukkan pembayaran Rp.";
			cin>>b;
			kembalian =b-pembayaran;
			cout<<"\n-----------------------------------";
			cout<<"\n Kembalian anda adalah Rp."<<kembalian;
			cout<<"\n-----------------------------------";
    		break;
		case 2:   
    		cout<<"\nTIKET SINGLE";
			cout<<"\n===============";
			cout<<"\nMasukkan jumlah  tiket :";
			cin>>tiket;
			total = tiket*35000;
			jumlah =total*0.1;
			pembayaran=total-jumlah;
			cout<<"Total :"<<pembayaran;
			cout<<"\nMasukkan pembayaran Rp.";
			cin>>b;
			kembalian =b-pembayaran;
			cout<<"\n-----------------------------------";
			cout<<"\n Kembalian anda adalah Rp."<<kembalian;
			cout<<"\n-----------------------------------";

    		break;
		case 3:   
    		cout<<"\nTIKET MARIPOSA";
			cout<<"\n===============";
			cout<<"\nMasukkan jumlah  tiket :";
			cin>>tiket;
			total = tiket*25000;
			jumlah =total*0.1;
			pembayaran=total-jumlah;
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
