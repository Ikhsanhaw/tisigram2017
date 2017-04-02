#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	int tanggal;
	scanf("%d",&tanggal);
	tanggal = abs(tanggal-5);
	int mod = tanggal%7;
	switch(mod) {
		case 0: {
			printf("Senin\n");
			break;
		}
		case 1: {
			printf("Selasa\n");
			break;
		}
		case 2: {
			printf("Rabu\n");
			break;
		}
		case 3: {
			printf("Kamis\n");
			break;
		}
		case 4: {
			printf("Jumat\n");
			break;
		}
		case 5: {
			printf("Sabtu\n");
			break;
		}
		case 6: {
			printf("Minggu\n");
			break;
		}
		default : {
			break;
		}
	}
	return 0;
}