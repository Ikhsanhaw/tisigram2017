#include <stdio.h>

int main(){
	short int s,m;
	scanf("%hd",&s);
	scanf("%hd",&m);
	if (s*2 > m){
		printf("PERANG\n");
	} else {
		printf("MUNDUR\n");
	}
}
