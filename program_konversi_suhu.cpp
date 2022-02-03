#include <iostream>

using namespace std;
 int main(){
 float  celc, fahr;
 float ream, kelv;
    cout<<"\t\t=========================\n";
    cout<<"\t\t Program Konversi Suhu \n";
    cout<<"\t\t=========================\n";
    cout << "\nMasukan Suhu Celcius: ";
      cin >> celc;

      fahr = celc*1.8 + 32;
      ream = (fahr-32)*0.444;
      kelv =   (1.25*ream) + 273;

      cout << "\njadi, " << celc << " derajat celcius\t= " << fahr << " derajat Fahrenheit";
      cout << "\n      " << fahr << " derajat Fahrenheit\t= " << ream<< " derajat reamur";
      cout << "\n      " << ream << " derajat reamur\t= " << kelv << " derajat kelvin";
 }
