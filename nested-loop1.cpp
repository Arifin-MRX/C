#include <iostream>
using namespace std;
int main()
{
  int a=7,b,c,d;
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
  return 0;
}