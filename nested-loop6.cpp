#include <iostream>
using namespace std;
int main (){
    int a,b,c;
    for (a=0;a<=9;a++){
        for(b=0;b<=6;b++){
            c=a+b;
            cout<<"("<<a<<","<<c<<")";
        }
        cout<< endl;
    }
}