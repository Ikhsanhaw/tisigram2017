#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

typedef char string[1005];

int main(){
	int T; char *p;
	scanf("%d\n",&T);
	while(T--){
		string angkaString,angkaConvert;
		gets(angkaString);
		unsigned long long int angka = strtoull(angkaString,&p,10);
		sprintf(angkaConvert,"%llu",angka);
		printf("%s\n",strcmp(angkaString,angkaConvert)==0? "true" : "false");
	}
	return 0;
}

