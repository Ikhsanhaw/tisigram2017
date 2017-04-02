/*==================================================================*/
/*Nama 				: Debora Eirene
/*Nama Program 		: Mencari Nilai terkecil pada sebuah array
/* Tanggal Pembuatan: 9 Desember 2016
/*Waktu 			: 19.49-20.02
/*Compiler 			: Dev-C++5.11


/*================================================================*/
#include<stdio.h>

int main(){
	int awal, lahir, mati, sisa;
	scanf("%d",&awal);
	scanf("%d",&lahir);
	scanf("%d",&mati);
	
	printf("%d\n", awal);
	
	
	if (awal==0 && lahir>0){
		printf("mustahil!\n");
		}else{
			printf("%d\n", awal+lahir);
		}
	
	if ((awal-mati)<0){
		printf("mustahil!\n");
	}else{
		printf("%d\n", awal-mati);
	}
	
	
	return 0;
	
}
