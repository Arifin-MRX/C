#include <iostream>
#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>
struct Node{
	int data;
	Node *kiri;
	Node *kanan;
};
void tambah(Node **root, int databaru){
	if((*root) == NULL){
		Node *baru;
		baru = new Node;
		baru->data = databaru;
		baru->kiri = NULL;
		baru->kanan = NULL;
		(*root) = baru;
		(*root)->kiri = NULL;
		(*root)->kanan = NULL;
		printf("Data bertambah!");
	}else if(databaru<(*root)->data)
		tambah(&(*root)->kiri, databaru);
		else if(databaru>(*root)->data)
		tambah(&(*root)->kanan, databaru);
		else if(databaru == (*root)->data)
		printf("Data sudah ada!");
}
void preOrder(Node *root){
	if(root != NULL){
		printf("%d ", root->data);
		preOrder(root->kiri);
		preOrder(root->kanan);
	}
}
void inOrder(Node *root){
	if(root != NULL){
		inOrder(root->kiri);
		printf("%d ", root->data);
		inOrder(root->kanan);
	}
}
void postOrder(Node *root){
	if(root != NULL){
		postOrder(root->kiri);
		postOrder(root->kanan);
		printf("%d ", root->data);
	}
}
void DeleteTree(Node **root, int dataHapus){
	if(!(*root)){
		printf("Buat Tree terlebih dahulu");
	}else{
		if(dataHapus==(*root)->data){
			(*root) = NULL;
			printf("Data Telah terhapus");
		}else{
			printf("data yang anda masukkan tidak ada");
		}
	}
}


int main(){
	int pil, data;
	Node *pohon;
	pohon = NULL;
	do{
		printf("\n\t#PROGRAM TREE C++#");
		//system("cls");
		printf("\n\t#PROGRAM TREE C++#");
		printf("\n\t==================");
		printf("\nMENU");
		printf("\n----\n");
		printf("1. Tambah\n");
		printf("2. Lihat pre-order\n");
		printf("3. Lihat in-order\n");
		printf("4. Lihat post-order\n");
		printf("5. Clear Data\n");
		printf("6. Exit\n");
		printf("Pilihan : ");
		scanf("%d", &pil);
		switch(pil){
			case 1 :
				printf("\nINPUT : ");
				printf("\n-------");
				printf("\nData baru : ");
				scanf("%d", &data);
				tambah(&pohon, data);
			break;
			case 2 :
				printf("\nOUTPUT PRE ORDER : ");
				printf("\n------------------\n");
				if(pohon!=NULL)
					preOrder(pohon);
				else
					printf("Masih kosong!");
			break;
			case 3 :
				printf("\nOUTPUT IN ORDER : ");
				printf("\n------------------\n");
				if(pohon!=NULL)
					inOrder(pohon);
				else
					printf("Masih kosong!");
			break;
			case 4 :
				printf("\nOUTPUT POST ORDER : ");
				printf("\n------------------\n");
				if(pohon!=NULL)
					postOrder(pohon);
				else
					printf("Masih kosong!");
			break;
			case 5 :
				printf("\nHapus Data : ");
				scanf("%d", &data);
				DeleteTree(&pohon,data);
			break;
		}//_getch();
	}while(pil != 6);
	return EXIT_FAILURE;
}

