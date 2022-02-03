#include <iostream>
using namespace std;
int main(){
    int a,b,z=1;
    int y=10;
    cout<<"A. "<<endl;
    for (a=1;a<=3;a++){
        for(b=1;b<=3;b++){
            cout<<z<<"\t";
            z=z+2;
        }
        cout<< endl;
    }
    cout<<endl;
    cout<<"B. "<<endl;
    for (a=1;a<=5;a++){
        for(b=5;b>=a;b--){
            cout<<b<<" ";
        }
        cout<< endl;
    }
    cout<<endl;
    cout<<"C. "<<endl;
     for (a=1;a<=5;a++){
        for(b=10;b>=y;b-=2){
            cout<<y<<" ";
        }
        y-=2;
        cout<< endl;
    }
    cout<<endl;
    cout<<"D. "<<endl;
    for (a=5;a<=9;a+=2){
        for(b=9;b>=a;b--){
            cout<<a<<" ";
        }
        cout<< endl;
    }

    return 0;
}