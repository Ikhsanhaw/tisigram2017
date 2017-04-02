#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef char string[1005];

bool isValidNumber(char angka[], char max[]){
	int idx = 0;
	while(idx < strlen(max)){
		if (angka[idx] > max[idx])
			return false;
		if (angka[idx] < max[idx])
			return true;
		idx++;
	}
	return true;
}

int main(){
	string max = "18446744073709551615";
	int T;
	scanf("%d\n",&T);
	while(T--){
		string angka;
		gets(angka);
		if (strlen(angka) < strlen(max)) printf("true\n");
		else if (strlen(angka) > strlen(max)) printf("false\n");
		else if (isValidNumber(angka,max)) printf("true\n");
		else printf("false\n");
	}
	return 0;
}

