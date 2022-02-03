#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout <<"a. ";
    for (a=5;a<=15;a+=2){
        cout <<"\t"<<a;}
    cout<<endl;
    cout <<"b. ";
    for (b=1;b<=81;b*=-3){
        cout <<"\t"<<b;}
    cout<<endl;
    cout <<"c. ";
    for (a=3,b=0;a<=18;a++,b++){
        cout <<"\t"<<a;
        a+=b;
    }
    return 0;
}