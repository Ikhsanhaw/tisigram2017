#include <stdio.h>

int main(){
	char kata[10];
	int i = 0;
	char kar;
	while((kar=getchar())!='\n'){
		kata[i] = kar;
		i++;
	}
	if(i>0){
		i-=1;
	}
	while(i>=0){
		printf("%c",kata[i]);
		i--;
	}
	printf("\n");
	return 0;
}
