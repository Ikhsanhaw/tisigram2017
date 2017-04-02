#include <stdio.h>

int main(){
	int tanggal;
	
	scanf("%d",&tanggal);
	switch(tanggal%7){
		case 0: {
			printf("Rabu");
			break;
		}
		case 1: {
			printf("Kamis");
			break;
		}
		case 2: {
			printf("Jumat");
			break;
		}
		case 3: {
			printf("Sabtu");
			break;
		}
		case 4: {
			printf("Minggu");
			break;
		}
		case 5: {
			printf("Senin");
			break;
		}
		case 6: {
			printf("Selasa");
			break;
		}
	}
	printf("\n");
	return 0;
}
