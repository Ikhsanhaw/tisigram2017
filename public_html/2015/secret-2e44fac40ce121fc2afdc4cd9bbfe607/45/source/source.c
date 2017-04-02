#include <stdio.h>

int hitung(int harga, int tanggal);

int main() {
	int harga, tanggal;

	scanf("%d", &harga);
	scanf("%d", &tanggal);
	
	if (harga >= 50000) {
		printf("%d\n", hitung(harga,tanggal)); }
	else {
		printf("%d\n", harga); }
	return 0; }

int hitung(int harga, int tanggal) {
	return harga-(harga*tanggal)/100; }