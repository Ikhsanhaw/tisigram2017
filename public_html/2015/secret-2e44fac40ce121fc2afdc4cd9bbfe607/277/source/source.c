#include <stdio.h>
int main(){
	int harga, tanggal;

	scanf("%d", &harga);
	scanf("%d", &tanggal);

	printf("%.0f\n", harga-(0.01*tanggal*harga));

	return 0;
}
