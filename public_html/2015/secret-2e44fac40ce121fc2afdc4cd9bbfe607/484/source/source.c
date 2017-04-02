#include<stdio.h>
#include<string.h>

int main(){
	//Kamus Data
	char teks1[11];
	char teks2[11];
	int j, i;
	
	//Algoritma
	scanf("%s", &teks1);
	j = strlen(teks1) - 1;
	
	for (i = 0; i <= j; i++){
		teks2[i] = teks1[j - i];
		printf("%c", teks2[i]);
	}
	printf("\n");
	return 0;
}
