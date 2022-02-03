#include <iostream>
using namespace std;
int pangkat(int x)
{
  	int pangkat,hasil;
  	pangkat = x * x * x * x;
  	hasil=pangkat-(20*x)+19 ;
	return hasil;
}
int main()
{
	int x;
  	cout<<"Masukkan nilai X: ";
  	cin>>x;
  	cout<<"\nHasil dari f(x)=x^4-20 x+19 = "<<pangkat(x)<<endl;
  	cout<<"------------------------------------";

  	return 0;
}
