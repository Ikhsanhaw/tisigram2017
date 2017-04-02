#include<stdio.h>

int main(){
	int harga;
	short tanggal;
	scanf("%d",&harga);
	scanf("%hi",&tanggal);
	
	if (harga >= 50000){
		float diskon = (harga*tanggal)/100;
		int harga_diskon = harga - diskon;
		printf("%d\n", harga_diskon);
	}
	else{
		printf("%d\n",harga);
	}
	
	
	return 0;
}
