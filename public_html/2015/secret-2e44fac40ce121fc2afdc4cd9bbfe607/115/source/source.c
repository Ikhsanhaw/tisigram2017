#include <stdio.h>

int main() {
	int tanggal;

    scanf("%d", &tanggal);

	switch (tanggal%7) {
		case 5 : { printf("Senin\n"); break; }
		case 6 : { printf("Selasa\n"); break; }
		case 0 : { printf("Rabu\n"); break; }
		case 1 : { printf("Kamis\n"); break; }
		case 2 : { printf("Jumat\n"); break; }
		case 3 : { printf("Sabtu\n"); break; }
		case 4 : { printf("Minggu\n"); break; } }

	return 0; }
