/* Muntu dan Langit Senja - Solusi
 * Author: Muhammad Saiful Islam
 * Date: 06/04/2016
 * Version: 00
 */

#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int A, B, C, D, E, F;
		scanf("%d %d %d %d %d %d", &A, &B, &C, &D, &E, &F);
		printf("%d\n", A + B + C + D + E + F);
	}
	return 0;
}