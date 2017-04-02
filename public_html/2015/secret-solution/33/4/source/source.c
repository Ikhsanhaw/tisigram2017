#include <stdio.h>
#include <string.h>
#define MAX 1005
typedef char string[MAX];

int main(){
	string angka;
	scanf("%s",angka);
	int res = (angka[strlen(angka)-1] - '0') % 2;
	printf("%d\n",res);
	return 0;
}
