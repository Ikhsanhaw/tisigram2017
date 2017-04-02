/* Program		: A_Edwin.c
* Deskripsi		: Kemampuan Anggota Guild
* Nama/NIM		: Muhammad Edwin/151524021
* Tanggal/versi	: 25 Maret 2016/versi 1.0
* Compiler		: Dev-C++ 5.9.2
* HIMAKOM 
*/

#include <stdio.h>

int main () {
	//Deklarasi
	char nilai[7], level;
	int sum=0, index;
	
	//Algoritma
	for(index=0 ; index<6 ; index++){
		scanf("%c", &nilai[index]);
	}
	for(index=0 ; index<6 ; index++){
		toupper(nilai[index]);
		switch(nilai[index]){
			case 'S'	: sum+=6; break;
			case 'A'	: sum+=5; break;
			case 'B'	: sum+=4; break;
			case 'C'	: sum+=3; break;
			case 'D'	: sum+=2; break;
			case 'E'	: sum+=1; break;
		}
	}
	switch(sum){
		case 18	: printf("S+\n"); break;
		case 17	: printf("S-\n"); break;
		case 16	: printf("A+\n"); break;
		case 15	: printf("A\n"); break;
		case 14	: printf("A-\n"); break;
		case 13	: printf("B+\n"); break;
		case 12	: printf("B\n"); break;
		case 11	: printf("B-\n"); break;
		case 10	: printf("C+\n"); break;
		case 9	: printf("C\n"); break;
		case 8	: printf("C-\n"); break;
		case 7	: printf("D+\n"); break;
		case 6	: printf("D\n"); break;
		case 5	: printf("D-\n"); break;
		case 4	: printf("E+\n"); break;
		case 3	: printf("E\n"); break;
		case 2	: printf("E\n"); break;
		case 1	: printf("E\n"); break;
	}
	
	return 0;
}

