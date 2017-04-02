#include <stdio.h>
#include <string.h>
 
int main(){
	
	int testcase;
	int i,j;
	scanf("%d", &testcase);
	char text[testcase][50];
	
	for (i = 0; i < testcase; i++){
		scanf(" %[^\n]", text[i]);
	}
	
	for (i = 0; i < testcase; i++){
		for (j = 0; j < strlen(text[i]); j++){
			if ((int)text[i][j] % 2 == 0){
				printf("%c", text[i][j]);
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
