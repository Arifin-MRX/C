/*#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Masukkan ukuran ordo matri pertama dan kedua= ";cin>>n;
    int matri_1[n][n],matri_2[n][n];
    cout<<endl;
    for (i = 0; i < n; i++)
    {
        for (j=0; j<n; j++)
        {
            cout<<"Baris "<<i<<" kolom "<<j<<" : ";
            cin>>matrix_1 [n][n];
        }
        
    }
    cout<<"Tampilan matrix \n";
    for (i = 1; i < n; i++)
    {
        for (j=1; j<n; j++)
        {
            cout<<matrix_1 [n][n]<<" ";
        }
        cout<<endl;
    }
    
}*/

#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Masukkan ukuran ordo matri pertama dan kedua = ";cin>>n;
    int matrik_1[n][n];
    cout<<endl;
    for (i = 0; i < n; i++)
    {
        for (j=0; j<2; j++)
        {
            cout<<"Baris "<<i<<" kolom "<<j<<" : ";
            cin>>matrik_1 [i][j];
        }
        
    }
    cout<<"Tampilan matrix \n";
    for (i = 0; i<n; i++)
    {
        for (j=0; j<2; j++)
        {
            cout<<matrik_1 [i][j]<<" ";
        }
        cout<<endl;
    }
    
}