#include <iostream>
using namespace std;

int main(){
    cout<<"------------------------------------------------------";
    cout<<"\n\tMENDETEKSI BILANGAN PRIMA DAN NON PRIMA";
    cout<<"\n------------------------------------------------------";
    int n,i,cek;
    cout<<"\nMASUKKAN BILANGAN : ";
    cin>>n;
    // 0 dan 1 bukan angka prima
    if (n == 0 || n == 1) {
    cek++;
  }
  else
    for(i=2; i<=n; i++){ //dimulai dari 2 hingga n
          if(n % i == 0){         
               cek++; 
          }
     }
     if(cek==1){
          cout<< n <<" bilangan prima"<<endl;
     }else{
          cout<< n <<" bukan bilangan prima"<<endl;
     }
}