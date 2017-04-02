/*
	Program 		: _Ferdhika.c
	Deskripsi 		: 
	Author 			: Ferdhika Yudira (151524010)
	Tanggal/Version : -/01/2016 v.1.0
	Compiler 		: Dev C++ V5.7.1
	Ctt Lain 		: 
*/
#include<stdio.h>

/* Prototype */
int fpb(long int a,long int b);

int main(){
	/* Deklarasi */
	int i,n,hasil;
	long int bil1[101],bil2[101];
	
	/* Algoritma */
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%ld %ld",&bil1[i],&bil2[i]);
	}
	
	for(i=0;i<n;i++){
		hasil = fpb(bil1[i],bil2[i]);
		printf("%ld/%ld\n",bil2[i]/hasil,bil1[i]/hasil);
	}
	
	return 0;
}

/* Modul */
int fpb(long int a,long int b){
	if(b==0){
		return a;
	}else{
		fpb(b,a%b);
	}
}
