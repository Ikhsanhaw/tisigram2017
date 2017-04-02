#include <stdio.h>

void tampil(int N);

int main () {
	int N;
	scanf("%d", &N);
	tampil(N);
	return 0; }
	
void tampil(int N){
	int i;
	if (N == 0) {
		return; }
	if (N == 1) {
		printf("*\n"); }
	tampil(N-1);
	if (N > 1) { 
		for (i = 1; i <= N; i++) {
		printf("*"); }
		printf("\n"); }
	tampil(N-1); }

