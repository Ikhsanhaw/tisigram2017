#include <stdio.h>
#include <stdlib.h>

int main() {
	char ch, bh, dh; 
	int i, sum, x, y;
	sum = 0;
   	ch = getchar();
   	getchar();
   	bh = getchar();
   	getchar();
   	dh = getchar();
   	getchar();
    
   		if (ch == 'S') y = 1;
   		else if (ch == 'A') y = 4;
   		else if (ch == 'B') y = 7;
   		else if (ch == 'C') y = 10;
   		else if (ch == 'D') y = 13;
   		else y = 16;
   		sum = sum + y;

   		if (bh == 'S') y = 1;
   		else if (bh == 'A') y = 4;
   		else if (bh == 'B') y = 7;
   		else if (bh == 'C') y = 10;
   		else if (bh == 'D') y = 13;
   		else y = 16;
   		sum = sum + y;
   		if (dh == 'S') y = 1;
   		else if (dh == 'A') y = 4;
   		else if (dh == 'B') y = 7;
   		else if (dh == 'C') y = 10;
   		else if (dh == 'D') y = 13;
   		else y = 16;
   		sum = sum + y;
   	x = sum/3;
	switch (x) {
		case 1 :
			printf("S\n");
			break;
		case 2 :
			printf("S-\n");
			break;
		case 3 :
			printf("A+\n");
			break;
		case 4 :
			printf("A\n");
			break;
		case 5 :
			printf("A-\n");
			break;
		case 6 :
			printf("B+\n");
			break;
		case 7 :
			printf("B\n");
			break;
		case 8 :
			printf("B-\n");
			break;
		case 9 :
			printf("C+\n");
			break;
		case 10 :
			printf("C\n");
			break;
		case 11 :
			printf("C-\n");
			break;
		case 12 :
			printf("D+\n");
			break;
		case 13 :
			printf("D\n");
			break;
		case 14 :
			printf("D-\n");
			break;
		case 15 :
			printf("E+\n");
			break;
		case 16 :
			printf("E\n");
			break;
		default:
			printf("E\n");
	} 
	return 0;
}

