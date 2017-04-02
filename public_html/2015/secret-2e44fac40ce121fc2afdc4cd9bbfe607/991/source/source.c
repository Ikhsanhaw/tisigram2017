#include <stdio.h>
#include <stdlib.h>


int main(){
	int x[3];
	char a[3];
	int total = 0;
	
	scanf("%c",&a[0]);
	fflush(stdin);
	scanf("%c",&a[1]);
	fflush(stdin);
	scanf("%c",&a[2]);
	
	for(int i=0 ; i<3;i++){
		
		switch(a[i]){
			case 'S': x[i] = 16; break;
			case 'A': x[i] = 13; break;
			case 'B': x[i] = 10; break;
			case 'C': x[i] = 7; break;
			case 'D': x[i] = 4; break;
			case 'E': x[i] = 1; break;
			default: break;
		}
		total = total + x[i];	
	}
	
	total = total / 3;
	
	switch(total){
		case 1: printf("E\n");break;
		case 2: printf("E+\n");break;
		case 3: printf("D-\n");break;
		case 4: printf("D\n");break;
		case 5: printf("D+\n");break;
		case 6: printf("C-\n");break;
		case 7: printf("C\n");break;
		case 8: printf("C+\n");break;
		case 9: printf("B-\n");break;
		case 10: printf("B\n");break;
		case 11: printf("B+\n");break;
		case 12: printf("A-\n");break;
		case 13: printf("A\n"); break;
		case 14: printf("A+\n");break;
		case 15: printf("S-\n");break;
		case 16: printf("S\n");break;
		default: printf("SAD");break;
	}
	
	return 0;
	
}
