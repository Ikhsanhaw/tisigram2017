/* Cicak Naik Sumur (Versi Kluster 2) - Solusi
 * Author: Muhammad Taufiq Pratama
 * Date: 25/03/2016
 * Version: 00
 */

#include <stdio.h>

int cekHariKel3(int hari) {
	if(hari%3 == 0) {
		return 3;
	}
	else {
		return 1;
	}
}

int cekHariKel5(int hari) {
	if(hari%5 == 0) {
		return 2;
	}
	else {
		return 1;
	}
}

int cekNilaiNegatif(int prog) {
	if(prog < 0) {
		return 0;
	}
	else {
		return prog;
	}
}

int main(){
	int a, b, h, token;
	int prog = 0, count = 0, status = 0;
	
	scanf("%d %d %d", &a, &b, &h);
	while(status == 0) {
		count++;
		prog = prog + a * cekHariKel3(count);
	
		if(prog >= h) {
			status = 1;
		}
		else {
			prog = prog - b * cekHariKel5(count);
			prog = cekNilaiNegatif(prog);
		}
		if(count==15) {
			token = prog;
		}
		if(count==30 && prog<=token) {
			printf("mustahil\n");
			return 0;
		}
	}
	printf("%d\n", count);
	return 0;
}
