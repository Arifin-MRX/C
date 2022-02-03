#include <iostream>
using namespace std;
void segitiga (int a){
    int b,c,d;
  for(b=1; b<=a; b+=2) {
    for(c=1; c<=a-b; c++) {
      cout << " ";
    }
    for(d=1; d<=b; d++) {
      cout << " *";
    }
    cout<<endl;
    cout <<endl;
  }
}
void tentukan (){
    return segitiga (7);
}
int main (){
    tentukan();

}