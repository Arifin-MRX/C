#include <iostream>
using namespace std;

int main(){
	//disini kita melakukan pembuatan array yang mana berasal dari inputan user
	int cari;
    int banyakA;
	int x[100];
	cout<<"masukann banyak array :";
	cin>>banyakA;
	for(int m=0;m<banyakA;m++){
		cout<<"masukan array ke "<<m<<" :";
		cin>>x[m];
	}
	//proses pembuatan array
	//menampilkan array sebelum di sorting
	cout<<"array awal adalah:"<<endl;
	int y=banyakA-2;
	int param;
    int flag = 0;
	for(int m=0;m<banyakA;m++){
		cout<<x[m]<<" ";
	}
	cout<<endl<<endl<<"mulai proses sorting"<<endl;
	
	//memulai proses sorting
	while(y >= 0){
		int index = 0;
		while(index <= y){
			if(x[index] > x[index+1]){
				param = x[index];
				x[index] = x[index+1];
				x[index+1] = param;
						
			} 
			index++;
		}
		//disini kita melakukan pengecekan hasil di setiap tahapan sort
		for(int m=0;m<banyakA;m++){
		cout<<x[m]<<" ";
	}
	cout<<endl;
		y--;
	}
	//processing end
	
	//disini kita melakukan looping untuk mengeluarkan hasil sorting
	cout<<"hasil sortingnya adalah:"<<endl;
	
	for(int m=0;m<banyakA;m++){
		cout<<x[m]<<" ";
	}

    cout<<endl;
    cout<<"+==============================+\n";
    cout<<"Masukkan data yang ingin di cari : ";cin>>cari;
    for(int m=1;m<banyakA;m++)
    {
            if(x[m]== cari)
                {
                    flag = 1;
                    break;
                }
    }
    if (flag==1)
        {
            cout<<"-------------------------------\n";
            cout<<"Data di temukan!\n";
            cout<<"================\n";
        }
    else
    {
            cout<<"-------------------------------\n";
            cout<<" Data tidak temukan!\n";
            cout<<"\n ================\n";
    }
}