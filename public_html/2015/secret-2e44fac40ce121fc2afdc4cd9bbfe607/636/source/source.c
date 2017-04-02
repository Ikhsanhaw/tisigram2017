/*
Program 	 	 : J_PromoPujas.c
Deskripsi 	 	 : 
Author           : Ujang Wahyu 
Compiler         : Dev-C++ 5.11
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include<stdio.h>

int main(){
	int harga,uang,tanggal;
	
	scanf("%d",&uang);
	scanf("%d",&tanggal);
	
	if(uang>=50000){
		harga=uang-(uang*tanggal/100);
	}else{
		harga = uang;
	}
	printf("%d\n", harga);
	return 0;
}
