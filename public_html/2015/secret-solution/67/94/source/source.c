/* Muntu Si Penggembala Alien - Solusi
 * Author: Muhammad Taufiq Pratama
 * Date: 07/04/2016
 * Version: 00
 */
 
#include <stdio.h>
#include <math.h>

void invers(int N[], int k1, int k2) {
	int M[2][2];
	int x;
	M[0][0] = 1;
	M[0][1] = 1;
	M[1][0] = k1;
	M[1][1] = k2;
	double res[2];
	
	if(M[0][0]*M[1][1] - M[0][1]*M[1][0] == 0) {
		printf("mustahil\n");
	}
	else {
		x = M[0][0]*M[1][1] - M[0][1]*M[1][0];
		
		res[0] = (M[1][1]*N[0] + -1*M[0][1]*N[1]) / x;
		res[1] = (-1*M[1][0]*N[0] + M[0][0]*N[1]) / x;
		
		if(res[0] > 0 && res[1] > 0) {
			if(res[0] == floor(res[0]) || res[1] == floor(res[1])) {
				printf("%d %d\n", (int)res[0], (int)res[1]);
			}
		}
		else {
			printf("mustahil\n");
		}
	}
}

int main() {
	int kaki1, kaki2;
	int N[2];
	
	scanf("%d %d", &kaki1, &kaki2);
	scanf("%d %d", &N[0], &N[1]);
	invers(N, kaki1, kaki2);
	
	return 0;
}
