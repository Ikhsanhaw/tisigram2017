/* Kereta Tiba Pukul Berapa? - Solusi
 * Author: Muhammad Saiful Islam
 * Date: 26/02/2016
 * Version: 00
 */

#include <stdio.h>

int main() {
	int X, Y, P, Q;
	scanf("%d %d %d %d", &X, &Y, &P, &Q);

	while (P != Q) {
		if (P > Q) {
			Q = Q + Y;
		} else {
			P = P + X;
		}
	}

	printf("%d\n", P);
	return 0;
}