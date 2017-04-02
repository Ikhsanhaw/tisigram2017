#include <stdio.h>
int main(){
	int harga, tanggal;

	scanf("%d", &harga);
	scanf("%d", &tanggal);
	
	if(harga>=50000){
		printf("%.0f\n", harga-(0.01*tanggal*harga));
	}else{
		printf("%d\n",harga) ;
	}
	

	return 0;
}
