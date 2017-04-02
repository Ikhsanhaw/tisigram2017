#include <stdio.h>

int main(){
	int tanggal;
	
	scanf("%d",&tanggal);
	switch(tanggal%5){
		case 0: {
			printf("Kamis");
			break;
		}
		case 1: {
			printf("Jumat");
			break;
		}
		case 2: {
			printf("Sabtu");
			break;
		}
		case 3: {
			printf("Minggu");
			break;
		}
		case 4: {
			printf("Senin");
			break;
		}
		case 5: {
			printf("Selasa");
			break;
		}
		case 6: {
			printf("Rabu");
			break;
		}
	}
	printf("\n");
	return 0;
}
