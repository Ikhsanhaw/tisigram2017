#include <stdio.h>

int main(){
	int harga,diskon,bayar;
	
	scanf("%d",&harga);
	scanf("%d",&diskon);
	if(harga>=50000){
		bayar=harga-diskon*harga/100;
	} else{
		bayar=harga;
	}
	printf("%d\n",bayar);
	return 0;
}
