/*========================================================= 
Program : SimulasiTisigram1.c  								
Nama      : REKA ALAMSYAH									
Version	  : 1.0												
Compiler  : TDM-GCC 4.9.2 64-bit Release					
============================================================ */
#include <stdio.h>
#include <string.h>
int main(){
	
	int jumlahNilai=0;
	char nilai1,nilai2,nilai3;
	int intNilai1,intNilai2, intNilai3;
	
	scanf("%c %c %c",&nilai1,&nilai2,&nilai3);
		
	nilai1=toupper(nilai1);
	nilai2=toupper(nilai2);
	nilai3=toupper(nilai3);
	
	switch (nilai1){
		case 'S': intNilai1=100;
		break;
		case 'A': intNilai1=85;
		break;
		case 'B': intNilai1=70;
		break;
		case 'C': intNilai1=55;
		break;
		case 'D': intNilai1=40;
		break;
		case 'E': intNilai1=25;
		break;
	}
	
	switch (nilai2){
		case 'S': intNilai2=100;
		break;
		case 'A': intNilai2=85;
		break;
		case 'B': intNilai2=70;
		break;
		case 'C': intNilai2=55;
		break;
		case 'D': intNilai2=40;
		break;
		case 'E': intNilai2=25;
		break;
	}
	
	switch (nilai3){
		case 'S': intNilai3=100;
		break;
		case 'A': intNilai3=85;
		break;
		case 'B': intNilai3=70;
		break;
		case 'C': intNilai3=55;
		break;
		case 'D': intNilai3=40;
		break;
		case 'E': intNilai3=25;
		break;
	}
	
	jumlahNilai=(intNilai1+intNilai2+intNilai3)/3;
	
	switch (jumlahNilai){
		case 100 : printf("S\n");
		break;
		case 95 : printf("S-\n");
		break;
		case 90 : printf("A+\n");
		break;
		case 85 : printf("A\n");
		break;
		case 80 : printf("A-\n");
		break;
		case 75 : printf("B+\n");
		break;
		case 70 : printf("B\n");
		break;
		case 65 : printf("B-\n");
		break;
		case 60 : printf("C+\n");
		break;
		case 55 : printf("C\n");
		break;
		case 50 : printf("C-\n");
		break;
		case 45 : printf("D+\n");
		break;
		case 40 : printf("D\n");
		break;
		case 35 : printf("D-\n");
		break;
		case 30 : printf("E+\n");
		break;
		case 25 : printf("E\n");
		break;																				
	}
	
	
	
}

