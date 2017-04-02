/* Aria's Tower - Solusi
 * Author: Muhammad Saiful Islam
 * Date: 08/04/2016
 * Version: 00
 */

#include <stdio.h>
#include <stdbool.h>

#define MAX_FLOOR 1000001

bool isFour(long N) {
	bool determined = false;
	do {
		if ( N % 10 == 4 ) {
			determined = true;
		} else {
			N /= 10;
		}
	} while ( N >= 4 && !determined );
	return determined;
}

bool isThirteen(long N) {
	bool determined = false;
	do {
		if ( N % 100 == 13 ) {
			determined = true;
		} else {
			N /= 10;
		}
	} while ( N >= 13 && !determined );
	return determined;
}

long tower[MAX_FLOOR];

int main() {
	/* Menghitung di awal, agar tidak perlu menghitung berkali-kali di setiap testcase */
	
	unsigned long current_floor = 1;
	unsigned long actual_floor = 1;
	
	/* Hasil penghitungan akan berupa array:
	 *     tower[x] = f(x)
	 * di mana f(x) berisi lantai sebenarnya dari lantai versi Rara
	 * dan f(x) = -1 jika x memiliki angka mitos
	 */
	while ( current_floor <= MAX_FLOOR ) {
		if ( isFour(current_floor) || isThirteen(current_floor) ) { // mengandung angka mitos
			tower[current_floor] = -1;
		} else {
			tower[current_floor] = actual_floor;
			actual_floor++;
		}
		current_floor++;
	}
	
	/* Minta jumlah testcase */
	unsigned long T;
	scanf("%ld", &T);
	
	while (T--) { // untuk setiap testcase
		unsigned long G, H, L;
		scanf("%ld %ld %ld", &G, &H, &L);
		
		long requested_floor = tower[L];
		if ( requested_floor == -1 ) {
			printf("angka mitos\n");
		} else {
			printf("%ld\n", G + H * (requested_floor - 1));
		}
	}
	
	return 0;
}
