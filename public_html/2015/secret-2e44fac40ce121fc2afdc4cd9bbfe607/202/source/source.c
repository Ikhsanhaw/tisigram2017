#include <stdio.h>

int main(){
	char hari[7][6] = {"Kamis","Jumat","Sabtu","Minggu","Senin","Selasa","Rabu"};
	int tanggal;

	scanf("%d", &tanggal);

	if (tanggal%7==0)
	{
		printf("%s\n", hari[6]);
	}else{
		printf("%s\n", hari[tanggal%7-1]);
	}

	return 0;
}
