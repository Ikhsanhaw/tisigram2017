/* Cicak Naik Sumur (Versi Kluster 2) - Solusi
 * Author: Muhammad Taufiq Pratama
 * Date: 25/03/2016
 * Version: 00
 */

#include <stdio.h>

int main(){
	int a, b, h;
	int prog = 0, count = 0, status = 0;
	
	scanf("%d %d %d", &a, &b, &h);
	if(a <= b) {
		printf("mustahil\n");
	}
	else {
		while(status == 0) {
			count++;
			prog = prog + a;
		
			if(prog >= h) {
				status = 1;
			}
			else {
				prog = prog - b;
			}
		}
		printf("%d\n", count);
	}
}
