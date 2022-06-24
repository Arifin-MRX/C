#include <iostream>
using namespace std;
int faktorial1 (int n){
    if (n<=1){
        return 1;
    }
    else {
        return n * faktorial1 (n-1);
    }
}
int faktorial2 (int m){
    if (m<=1){
        return 1;
    }
    else {
        return m * faktorial2 (m-1);
    }
}
int main (){
    int n,r,m,permutasi;
    cout<<"________________________________\n";
    cout<<"| PROGRAM MENGHITUNG PERMUTASI |\n";
    cout<<"|                              |\n";
    cout<<"________________________________\n";
    cout<<endl;
    cout<<endl;
    cout<<"Masukkan nilai n : ";
    cin>>n;
    cout<<"Masukan nilai r : ";
    cin>>r;
    m=n-r;
    permutasi=faktorial1(n)/faktorial2(m);
    cout<<endl;
    cout<<"Hasil pemutasian 8P3 = "<<permutasi;
    cout<<endl;
    cout<<endl;
}