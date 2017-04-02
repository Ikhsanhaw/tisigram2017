#include <stdio.h>
#include <string.h>
 
int score(char nilai[]);
 
int main(){
	char kelincahan[2], kecerdasan[2], kekuatan[2];
	int total=0;
 
	scanf("%s", &kelincahan);
	scanf("%s", &kecerdasan);
	scanf("%s", &kekuatan);
 
	total = score(kelincahan)+ score(kecerdasan) + score(kekuatan)+ 1;
	
	switch(total){
		case 16 : printf("S\n");break;
		case 15 : printf("S-\n");break;
		case 14 : printf("A+\n");break;
		case 13 : printf("A\n");break;
		case 12 : printf("A-\n");break;
		case 11 : printf("B+\n");break;
		case 10 : printf("B\n");break;
		case 9 : printf("B-\n");break;
		case 8 : printf("C+\n");break;
		case 7 : printf("C\n");break;
		case 6 : printf("C-\n");break;
		case 5 : printf("D+\n");break;
		case 4 : printf("D\n");break;
		case 3 : printf("D-\n");break;
		case 2 : printf("E+\n");break;
		case 1 : printf("E\n");break;
	}
	
	return 0;
}
 
int score(char nilai[]){
	int angka;
	switch(nilai[0]){
		case 'S' : angka= 5; break;
		case 'A' : angka= 4; break;
		case 'B' : angka= 3; break;
		case 'C' : angka= 2; break;
		case 'D' : angka= 1; break;
		case 'E' : angka= 0; break;
	}
	return angka;
}
