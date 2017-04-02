#include <stdio.h>

int main(){
	char nilai [4];
	int i, score[3], totalscore = 0;
	
	for (i = 0 ; i <= 2 ; i ++){
		scanf("%s",&nilai[i]);
		switch(nilai[i]){
			case 'E':score[i] = 1;break;
			case 'D':score[i] = 2;break;
			case 'C':score[i] = 3;break;
			case 'B':score[i] = 4;break;
			case 'A':score[i] = 5;break;
			case 'S':score[i] = 6;break;
		}
		totalscore = totalscore + score[i];
	}
	totalscore = totalscore - 2;
	switch(totalscore){
		case 1:printf("E");break;
		case 2:printf("E+");break;
		case 3:printf("D-");break;
		case 4:printf("D");break;
		case 5:printf("D+");break;
		case 6:printf("C-");break;
		case 7:printf("C");break;
		case 8:printf("C+");break;
		case 9:printf("B-");break;
		case 10:printf("B");break;
		case 11:printf("B+");break;
		case 12:printf("A-");break;
		case 13:printf("A");break;
		case 14:printf("A+");break;
		case 15:printf("S-");break;
		case 16:printf("S");break;
	}
	printf("\n");
	return 0;
	
}

