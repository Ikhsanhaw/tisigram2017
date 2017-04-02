#include <stdio.h>

int main(){
	char hari[8][6];
	int tanggal;
	hari = {Kamis, Jumat, Sabtu, Minggu, Senin, Selasa, Rabu};

	scanf("%d", &tanggal);

	if (tanggal%7==0)
	{
		printf("%d", hari[6]);
	}else{
		printf("%d", hari[tanggal%7-1]);
	}

	return 0;
}
