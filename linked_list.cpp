#include <iostream>
using namespace std;

 struct tnode{
	int data;
	tnode *next;
};
tnode *head;
void init(){
	head=NULL;
}

int iskosong(){
	if(head == NULL){
        	return 1;
    	}
    	else{
        	return 0;
    	}
}

void tampil(){
    	tnode *bantu;
    	bantu=head;
		if(iskosong()==0)
			{
				while(bantu!=NULL)
					{
						cout<<bantu->data<<" ";
						bantu=bantu->next;
					}
				cout<<"\n";
			}
		else
			{
				cout<<"masih kosong\n";
            }
} 

void isidepan(int databaru){
  tnode *baru;
  baru = new tnode;
  baru->data = databaru;
  baru->next = NULL;
  if(iskosong()==1){
     head=baru;
     head->next=NULL;
  }
  else{
     baru->next=head;
     head=baru;
  }
  cout<<"Penambahan data berhasil\n";
}

void isibelakang(int databaru){
    tnode *baru,*bantu1;
    baru = new tnode;
    baru->data = databaru;
    baru->next = NULL;
    	if(iskosong()==1){
        	head=baru;
        	head->next=NULL;
    		}else{
        		bantu1 = head;
        			while(bantu1->next!=NULL){
            			bantu1 = bantu1->next;
        			}
        		bantu1->next = baru;
    			}
cout<<"penambahan data berasil\n";
}

void hapus_depan(){
  tnode *hapus;      // pointer bertipe tnode dengan nama = 'hapus'
  int d;             // mendefinisikan variabel d bertipe integer.
  if(iskosong()==0)  //  if ( 0 = 0 )
	{
	  if(head->next!=NULL)    // (FF03->next!=null) -- (FF01 != null) -- ya
		{
		  hapus=head;        // hapus = FF03
		  d=hapus->data;     // d = FF03->data -- d=8
		  head=head->next;   // head = FF03->next -- head = FF01
		  delete hapus;      // delete  FF03
		}
	  else
		{
		  d=head->data;
		  head=NULL;
		}
	  cout<<d<<" "<<"terhapus\n";
  }
  else
  {

	  cout<<"masih kosong";
  }
}

void hapus_belakang()
  {
    tnode *hapus,*bantu;
    int d;

	 if(iskosong()==0)
		{
		  if(head->next!=NULL)
			{
            bantu = head;
				while(bantu->next->next!=NULL)
					{
                bantu = bantu->next;
					}
				hapus = bantu->next;
				d=hapus->data;
				bantu->next=NULL;
            delete hapus;
		  }

		  else
		  {
			  d=head->data;
			  head=NULL;
        }
        cout<<d<<" "<<"terhapus\n";
		}
	 else
		{
        cout<<"masih kosong";
		}
  }

int main()
{
	int pilihan, data;
	do
	{
		cout<<endl;
		cout<<"2118131 | Moh harifin"<<endl;
		cout<<"==========================="<<endl;
		cout<<"Single Linked List dengan Head"<<endl;
		cout<<"1. Masukkan Data dari Depan"<<endl;
		cout<<"2. Masukkan Data dari Belakang"<<endl;
		cout<<"3. Hapus Data dari depan"<<endl;
		cout<<"4. Hapus Data dari belakang"<<endl;
		cout<<"5. Tampil Data"<<endl;
		cout<<"6. Keluar"<<endl;
		cout<<"Masukkan Pilihan Anda : "; 
		cin>>pilihan;
		if (pilihan == 1 )
		{
			cout<<"Masukkan Data = "; cin>>data;
			isidepan(data);
		}
		else if (pilihan == 2 )
		{
			cout<<"Masukkan Data = "; cin>>data;
			isibelakang(data);
		}
		else if (pilihan == 3 )
		{
			hapus_depan();
		}
		else if (pilihan == 4 )
		{
			hapus_belakang();
		}
		else if (pilihan == 5 )
		{
			tampil();
		}
		else if (pilihan == 6 )
		{
			cout<<"Keluar dari program";
		}
		else
		{
			cout<<"Pilihan tidak tersedia... \n\n";
		}
	}
	while(pilihan !=6);
}