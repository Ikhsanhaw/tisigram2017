#include <stdio.h>

int main(){
	char x;
	scanf("%c", &x);
	
	switch(x){
		case 'a': printf("True\n"); break;
		case 'i': printf("True\n"); break;
		case 'u': printf("True\n"); break;
		case 'e': printf("True\n"); break;
		case 'o': printf("True\n"); break; 
		case 'A': printf("True\n"); break;
		case 'I': printf("True\n"); break;
		case 'U': printf("True\n"); break;
		case 'E': printf("True\n"); break;
		case 'O': printf("True\n"); break; 
		default: printf("False\n");
	}
	
	return 0;
}
