#include<stdio.h>

int main(){
	int tanggal;
	scanf("%d",&tanggal);
	switch((tanggal-5)%7){
		case 0 : printf("Senin\n");break;
		case 1 : printf("Selasa\n");break;
		case 2 : printf("Rabu\n");break;
		case 3 : printf("Kamis\n");break;
		case 4 : printf("Jumat\n");break;
		case 5 : printf("Sabtu\n");break;
		case 6 : printf("Minggu\n");break;
	}
	return 0;
}
