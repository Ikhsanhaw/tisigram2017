#include <stdio.h>

int main(){
	int tgl, harga;
	
	scanf("%d",&harga);
	scanf("%d",&tgl);
	if((harga >= 10000) && (harga <= 2000000)){
		if(harga >= 50000){
			harga = harga - (tgl * harga * 1/100);
		}
	}
	printf("%d\n",harga);
	
	return 0;
}
