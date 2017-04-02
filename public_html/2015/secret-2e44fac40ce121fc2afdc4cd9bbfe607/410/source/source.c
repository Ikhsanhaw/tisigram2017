#include <stdio.h>

int main() {
	int i, j, nilai, cek;

	scanf("%d",&i);

	while (i--) {
		cek = 1;
		scanf("%d", &j);
			while (j-- && cek == 1) {
				scanf("%d", &nilai);
				if (nilai < 60) {
					cek = 0; } }
		if (cek == 1) {
			printf("lulus\n"); }
		else {
			printf("anda harus remedial\n"); } }

	return 0; }
