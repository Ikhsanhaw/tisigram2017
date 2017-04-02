#include<stdio.h>

int main(){
	int j1, j2;
	scanf("%d %d", &j1, &j2);
	if ((j1*2) >= j2){
		printf("PERANG\n");
	}
	else{
		printf("MUNDUR\n");
	}
	return 0;
}
