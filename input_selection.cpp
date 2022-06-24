#include <iostream>
using namespace std;

int main () {
    int i,pos, j,temp,jumlah;
    i=0;
    pos=0;
    j=1;
    cout<<"Jumlah data : "; cin>>jumlah;
    int data [jumlah];
    for (int a = 0; a < jumlah; a++)
    {
        cout <<"masukkan Data ke-"<<a+1<<" = ";cin>>data[a];
    }
    cout<<endl;
    cout<<"Data Awal : ";
    for (int x = 0; x <jumlah ; x++)
    {
        cout<<data[x]<<" ";
    }
    cout <<endl<<endl;
    for (int z = 0; z < jumlah ; z++)
    {
        i=z;
        pos=z;
        j=z+1;
        while (j<jumlah)
        {
            if (data[j]<data[pos])
            {
                pos=j;
                j=j+1;
            }else {
                pos=pos;
                j=j+1;
            }
            
        }
        if (pos!=i)
        {
            temp =data[pos];
            data[pos]=data[i];
            data[i]=temp;
        }
        cout <<"Proses "<<z+1<<" = ";
        for (int x = 0; x <jumlah; x++)
        {
            cout<<data[x]<<" ";
        }
        cout<<endl;
        
    }
    
    
}