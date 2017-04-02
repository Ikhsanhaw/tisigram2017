#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char q[15];
	int i;
	gets(q);
	for(i=strlen(q)-1;i>=0;--i){
		printf("%c",q[i]);
	}
	printf("\n");
}
