#include <iostream>


using namespace std;
int main(){
   int bil, a;
    cout<<"menampilkan banyak data 2 s/d ";cin>>bil;
    cout<<endl;
    cout <<"bilangan genap dari hasil perkalian 3 antara 2 s/d "<<bil<<" adalah : "<<endl;
    for (int i=2;i<=bil;i*=3){
        if (i%2==0){
                cout <<i<<" ";
        }
    }
    cout <<endl;
    return 0;
}