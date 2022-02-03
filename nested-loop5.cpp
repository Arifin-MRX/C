#include <iostream>
using namespace std;
int main (){
    int a,b,y=1;
    for (a=5;a>=1;a--){
        for(b=1;b<=a;b++){
            cout<<b<<" ";
        }
        cout<<endl;
    }
    for (a=1;a<=5;a++){
        for(b=y;b>=1;b--){
            cout<<y<<" ";
        } 
        y++;
        cout<< endl;
    }
    
}