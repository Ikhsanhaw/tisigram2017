/* Cicak Naik Sumur (Versi Kluster 3) - Solusi
 * Author: Muhammad Taufiq Pratama
 * Date: 02/04/2016
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

int cekHariKel6(int hari) {
	if(hari%6 == 0) {
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
			prog = prog - b * cekHariKel6(count);
			prog = cekNilaiNegatif(prog);
		}
		if(count==6 && prog < h) {
			token = prog;
		}
		if(count==12 && prog<=token) {
			printf("mustahil\n");
			return 0;
		}
	}
	
	printf("%d\n", count);
	return 0;
}
