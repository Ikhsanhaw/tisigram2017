#include <stdio.h>
#include<string.h>

int main(){
	int N, i, index;
	char huruf[26]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char input[2];
	
	for (index = 0; index < 2; index++){
		scanf("%s", &input[index]);
	}
	
	int x = (int)toupper(input[0])-65;
	int y = (int)toupper(input[1])-65;
	
	for (index = x-1; index > y; index--){
		printf("%c\n", huruf[index]);
	}
	
	return 0;
}
