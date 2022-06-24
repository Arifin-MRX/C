#include <iostream>
using namespace std;

int main ()
{
        int i,pos,j,temp;
    int data[6]={32,75,69,58,21,40};
    cout<<"data awal : ";
    i=0;
    pos=0;
    j=1;
    for (int x= 0; x<=5;x++){
        cout<<data[x]<<" ";
    }
    cout<<endl;


    for (int z=0;z<=4;z++){
        i=z;
        pos=z;
        j=z;
        while (j<60){
            if (data[j]<data [pos]){
                pos =j;
                j=j+1;
            }
            else {
                pos=pos;
                j=j+j;
            }
        }
        if (pos !=i){
            temp=data[pos];
            data[pos]=data[i];
            data[i]=temp;
        }
        cout<<"Proses "<<z+1 <<" =";
        for (int x=0;x<=5;x++){
            cout<<data[x]<<" ";
        }
        cout<<endl;
    }
    return 0;
}