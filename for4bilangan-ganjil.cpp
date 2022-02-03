#include <iostream>
using namespace std;
int main (){
    /*INI ADALAH PROGRAM YANG BELUM DI PERBAIKI
    int bil, a;
    cout<<"menampilkan banyak data 60 s/d ";cin>>bil;
    cout<<endl;
    cout <<"bilangan ganjil antara 60 s/d "<<<<" adalah : "<<endl;
    for (int i=a;a<=100;i++){
        if (i>=60){
            if(i%2!=0){
                cout <<a<<;
            }
        }
    }*/
    //INI ADALAH PROGRAM YANG SUADAH DI PERBAIKI
     int bil, a;
    cout<<"menampilkan banyak data 60 s/d ";cin>>bil;
    cout<<endl;
    cout <<"bilangan ganjil antara 60 s/d "<<bil<<" adalah : "<<endl;
    for (int i=60;i<=bil;i++){
        if (i%2==1){
                cout <<i<<" ";
        }
    }
    cout <<endl;
    return 0;
}