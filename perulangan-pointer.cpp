#include <iostream>
using namespace std;

int main ()
{
   float  *x;
   float a,b,c;
    a=15;
    b=25;
    c=76.4907;
    cout<<endl;
   cout<<"Nilai A  : "<<a<<endl;
   cout<<"Nilai x  : "<<&x<<endl;
   cout<<"Nilai &A : "<<&a<<endl;
   x=&b;
   cout<<endl;
   cout<<"Nilai B  : "<<b<<endl;
   cout<<"Nilai x  : "<<x<<endl;
   cout<<"Nilai &B : "<<&b<<endl;
   x=&c;
   cout<<endl;
   cout<<"Nilai C  : "<<c<<endl;
   cout<<"Nilai x  : "<<x<<endl;
   cout<<"Nilai &C : "<<&c<<endl;

}