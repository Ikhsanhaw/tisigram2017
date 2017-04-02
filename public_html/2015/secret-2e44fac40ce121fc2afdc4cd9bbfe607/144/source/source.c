#include <stdio.h>

int main(){
	char kar;
	scanf("%c",&kar);
	kar = toupper(kar);
	if(kar=='A' || kar=='I' || kar=='U' || kar=='E' || kar=='O'){
		printf("True");
	}else{
		printf("False");
	}
	printf("\n");
	return 0;
}
