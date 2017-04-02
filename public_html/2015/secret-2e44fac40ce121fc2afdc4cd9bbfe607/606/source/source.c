#include<stdio.h>

int main (){
	int Tgl;
	scanf("%d", &Tgl);
	switch(Tgl % 7)
	{
		case 0 : printf("Rabu\n"); break;
		case 1 : printf("Kamis\n"); break;
		case 2 : printf("Jumat\n"); break;
		case 3 : printf("Sabtu\n"); break;
		case 4 : printf("Minggu\n"); break;
		case 5 : printf("Senin\n"); break;
		case 6 : printf("Selasa\n"); break;
	}
	
	return 0;
}
