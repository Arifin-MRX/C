#include <iostream>
 using namespace std;

 int main (){
     int b;
     cout <<"\n\t\tMateri yang di pelajari di bab III";
     cout <<"\n\t\t----------------------------------";
     cout<<endl;
     cout<< "\nmasukkan Nilai anda : ";
     cin>>b;
     if (b>=75){
         cout<<"\nSelamat nilai anda telah memenuhi syarat";
         cout<<"\n==========================================";
         cout<<endl;
     }else {
         cout<<"\nNilai anda tidak memenuhi syarat";
         cout<<"\n=====================================";
         cout<<endl;
     }
     
 }