#include <iostream>
using namespace std;
int main(){
    int banyak;
    int max, min;
    cout<<endl;
    cout<<"Masukkan banyak data : ";
    cin>>banyak;
    int data[banyak];
    for (int i = 1; i <= banyak; i++)
    {
        cout<<"Tinggi badan mahasiswa ke-"<<i<<" : ";
        cin>>data[i];
    }
    cout<<"\nData Tinggi badan mahasiswa semester 1";
    cout<<endl;
    for (int a = 1; a <= banyak; a++)
    {
        cout<<"\nTinggi badan mahasiswa ke-"<<a<<" : "<<data[a];
    }
    cout<<endl;
    max=data[0];
    for (int b = 0; b < banyak; b++)
    {
        if (data[b]>max){
        max=data[b];
        }else {
            min=data[b];
        }
    }
    cout<<"\nTinggi badan tertinggi : "<<max;
    cout<<"\nTinggi badan terendah : "<<min;
    
    
    
}
