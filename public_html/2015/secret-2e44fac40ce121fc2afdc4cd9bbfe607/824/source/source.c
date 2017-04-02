#include <stdio.h>

int main(){
	char x[3];
	int i;
	int p=0;
	for (i=0;i<3;i++){
	scanf("%s",&x[i]);
}
	for (i=0;i<3;i++){
	switch(x[i]){
		case 'S': p = p + 16; break;
		case 'A': p = p + 13; break;
		case 'B': p = p + 10; break;
		case 'C': p = p + 7; break;
		case 'D': p = p + 4; break;
		case 'E': p = p + 1; break;
	}
}
	p = p/3;
	switch(p){
		case 1: printf("E\n"); break;
		case 2: printf("E+\n"); break;
		case 3: printf("D-\n"); break;
		case 4: printf("D\n"); break;
		case 5: printf("D+\n"); break;
		case 6: printf("C-\n"); break;
		case 7: printf("C\n"); break;
		case 8: printf("C+\n"); break;
		case 9: printf("B-\n"); break;
		case 10: printf("B\n"); break;
		case 11: printf("B+\n"); break;
		case 12: printf("A-\n"); break;
		case 13: printf("A\n"); break;
		case 14: printf("A+\n"); break;
		case 15: printf("S-\n"); break;
		case 16: printf("S\n"); break;
	}
}
