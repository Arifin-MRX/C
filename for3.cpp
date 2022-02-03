#include <iostream>
using namespace std;
int main(){
    char A;
    int B,C;
    for (A='E', B=10,C=11; A>='A'; A-=1, B*=2, C-=2) 
	{
          cout<<"Nilai A = "<<A<<endl;
	    cout<<"Nilai B = "<<B<<endl;
        cout<<"Nilai C = "<<C<<endl;
	    cout<<endl;
	}
 return 0;
}