#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
main(){
	char q[11]={'A','a','I','i','U','u','E','e','O','o'};
	int i;
	char w;
	bool e=false;
	scanf("%c",&w);
	for(i=0;i<10;++i){
		if(w==q[i]){
			printf("True\n");
			e=true;
			break;
		}
	}
	if(e==false)printf("False\n");
}
