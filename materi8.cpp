#include <iostream>
using namespace std;
int kali( float b) 
{
  	float c,i;
  	for (i = 1; i <= 10 ;i++)
      {
          c = i * b;
          cout<<i<<" di kali "<<b<<" = "<<c<<endl;
      }
      
	return c;
}
int bagi( float b) 
{
  	float c,i;
  	for (i = 1; i <= 10 ;i++)
      {
          c = b/i;
          cout<<i<<" di bagi "<<b<<" = "<<c<<endl;
      }
      
	return c;
}

// Fungsi utama
int main() 
{
	float x;
    int y;
    cout<<"\nMasukkan Nilai : ";
    cin>>x;
    cout<<"\n====================";
    cout<<"\n[1] Perkalian ";
    cout<<"\n[2] Pembagian " ;
    cout<<endl;
    lagi:
    cout<<"\nMasukkan Pilihan : ";
    cin>>y;
    switch (y)
    {
    case 1:
        cout<<kali(x);
        break;
    case 2:
        cout<<bagi(x);
        break;
    default:
        cout<<"Pilih dengan benar !";
    cout<<"\n====================";
        goto lagi;
    }
  	return 0;
}
