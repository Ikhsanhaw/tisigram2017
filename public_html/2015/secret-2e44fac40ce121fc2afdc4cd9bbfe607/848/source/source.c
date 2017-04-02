/* Program 	: -
Deskripsi 	: -
Nama 		: freenando r/151524011
Tanggal 	: -
Compiler 	: dev-c++ 5.7.1
============================================================ */
#include<stdio.h>
int main(){
	char data[3];
	int i,j,angka[i];
	int total;
	for(i=0;i<3;i++){
		scanf("%s",&data[i]);
	}
	for(i=0;i<3;i++){
		switch(data[i]){
			case 'S':angka[i]=6; break;
			case 'A':angka[i]=5; break;
			case 'B':angka[i]=4; break;
			case 'C':angka[i]=3; break;
			case 'D':angka[i]=2; break;
			case 'E':angka[i]=1; break;
		}
	}
	total=angka[0]+angka[1]+angka[2];
	switch(total){
		case 18 :printf("S\n"); break;
		case 17 :printf("S-\n"); break;
		case 16 :printf("A+\n"); break;
		case 15 :printf("A\n"); break;
		case 14 :printf("A-\n"); break;
		case 13 :printf("B+\n"); break;
		case 12 :printf("B\n"); break;
		case 11 :printf("B-\n"); break;
		case 10 :printf("C+\n"); break;
		case 9  :printf("C\n"); break;
		case 8  :printf("C-\n"); break;
		case 7  :printf("D+\n"); break;
		case 6  :printf("D\n"); break;
		case 5  :printf("D-\n"); break;
		default :printf("E\n");break;
	}
return 0;
}
