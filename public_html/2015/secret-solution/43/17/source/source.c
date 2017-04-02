#include <stdio.h>
#include <string.h>
#define MAX 1005
typedef char string[MAX];
int main(){
	string angka;
	gets(angka);
	int sum = 0;
	for (int i = 0 ; i < strlen(angka) ;i++)
		sum+=(angka[i]-'0');

	printf("%d\n",sum);
	return 0;
}