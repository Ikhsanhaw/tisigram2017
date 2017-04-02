/*Program 		: Challenge5_Azri.c
* Deskripsi 	: Menentukan pemenang dalam Pemilu
* Nama 			: Azri Aliva Alhania - 151524005
* Tanggal/Versi	: 6 Desember 2015/v1.01
* Compiler 		: Dev-C++ 5.11
*/
#include<stdio.h>

/*Prototype*/
int PemenangPemilu (int calon, int wil);

int main(){
	//Deklarasi
	int testcase, i, j_kandidat, j_daerah;
	
	//Algoritma
	scanf("%d", &testcase);
	
	int winner[testcase];
	
	for(i = 1; i <= testcase; i++){
		scanf("%d %d", &j_kandidat, &j_daerah);
		winner[i-1] = PemenangPemilu(j_kandidat, j_daerah);
	}
	for (i = 0; i < testcase; i++){
		printf("%d\n", winner[i]);
	}
	
	return 0;
}

/* B O D Y */

int PemenangPemilu (int calon, int wil){
	//Deklarasi
	int x, y, sum[calon], pemenang, suara, max;
	
	//Algoritma
	for (x = 0; x < calon; x++){
		sum[x] = 0;
	}
	
	for (x = 0; x < wil; x++){
		for (y = 0; y < calon; y++){
			scanf("%d", &suara);
			sum[y] = sum[y] + suara;
		}
	}
	max = sum[0];
	pemenang = 1;
	if (calon > 1){
		for (x = 1; x < calon; x++){
			if (sum [x] > max){
				max = sum[x];
				pemenang = x + 1;
			}
		}
	
	}
	return pemenang;
}
