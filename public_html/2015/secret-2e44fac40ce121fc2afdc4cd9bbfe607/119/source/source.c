#include<stdio.h>

int main(){
	int harga;
	short tanggal;
	scanf("%d",&harga);
	scanf("%hi",&tanggal);
	
	float diskon = (harga*tanggal)/100;
	int harga_diskon = harga - diskon;
	printf("%d\n", harga_diskon);
	
	return 0;
}
