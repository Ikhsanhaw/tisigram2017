#include <stdio.h>

int main(){
	int totalHarga, tanggalLahir;
	scanf("%d %d", &totalHarga, &tanggalLahir);
	if(totalHarga >= 50000){
		totalHarga = totalHarga - ((tanggalLahir * totalHarga)/100);
		printf("%d\n", totalHarga);
	}else{
		printf("%d\n", totalHarga);
	}
	return 0;
}
