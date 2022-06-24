#include <iostream>
using namespace std;

int main () {
    int data [6]={32,75,69,58,21,40};
    int i,pos, j,temp;
    i=0;
    pos=0;
    j=1;
    cout<<"Data Awal : ";
    for (int x = 0; x <=5 ; x++)
    {
        cout<<data[x]<<" ";
    }
    cout <<endl<<endl;
    for (int z = 0; z <= 4 ; z++)
    {
        i=z;
        pos=z;
        j=z+1;
        while (j<6)
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
        for (int x = 0; x <=5; x++)
        {
            cout<<data[x]<<" ";
        }
        cout<<endl;
        
    }
    
    
}