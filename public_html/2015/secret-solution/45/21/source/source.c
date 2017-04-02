/* Cicak Naik Sumur (Versi Kluster 1) - Solusi
 * Author: Muhammad Taufiq Pratama
 * Date: 02/04/2016
 * Version: 00
 */

#include <stdio.h>

int main(){
	int x, h;
	int prog = 0, count = 0, status = 0;
	
	scanf("%d %d", &x, &h);
	if(x == 0) {
		printf("mustahil\n");
	}
	else {
		while(status == 0) {
			count++;
			prog = prog + x;
		
			if(prog >= h) {
				status = 1;
			}
		}
		printf("%d\n", count);
	}
}
