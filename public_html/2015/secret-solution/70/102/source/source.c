/* Tipe Data - Solusi
 * Author: Muhammad Saiful Islam
 * Date: 07/04/2016
 * Version: 00
 */

#include <stdio.h>
#include <string.h>

int main() {
	int T;
	scanf("%d\n", &T);
	while (T--) {
		char X[1005], Xi[1005];
		unsigned long long int Y;
		gets(X);
		sscanf(X, "%llu", &Y);
		sprintf(Xi, "%llu", Y);
		printf("%s\n", strcmp(X, Xi) == 0 ? "true" : "false");
	}
	return 0;
}