/*
	Program 		: _Ferdhika.c
	Deskripsi 		: 
	Author 			: Ferdhika Yudira (151524010)
	Tanggal/Version : -/01/2016 v.1.0
	Compiler 		: Dev C++ V5.7.1
	Ctt Lain 		: 
*/
#include<stdio.h>


/* Prototype */

int main(){
	/* Deklarasi */
	int i,sum=0;
	float hasil;
	char ex[4];
	
	/* Algoritma */
	for(i=0;i<3;i++){
		scanf("%c",&ex[i]);
		fflush(stdin);
	}
	
	for(i=0;i<3;i++){
		switch(ex[i]){
			case 'S' : ex[i] = 16; break;
			case 'A' : ex[i] = 13; break;
			case 'B' : ex[i] = 10; break;
			case 'C' : ex[i] = 7; break;
			case 'D' : ex[i] = 4; break;
			case 'E' : ex[i] = 1; break;
			default : ex[i] = 0; break;
		}
//		printf("%d\n",ex[i]);
		sum+=ex[i];
	}
	
	hasil=sum/3;
//	printf("%0.2f",hasil);
	
	if(hasil==16){
		printf("S");
	}else if(hasil==15){
		printf("S-");
	}else if(hasil==14){
		printf("A+");
	}else if(hasil==13){
		printf("A");
	}else if(hasil==12){
		printf("A-");
	}else if(hasil==11){
		printf("B+");
	}else if(hasil==10){
		printf("B");
	}else if(hasil==9){
		printf("B-");
	}else if(hasil==8){
		printf("C+");
	}else if(hasil==7){
		printf("C");
	}else if(hasil==6){
		printf("C-");
	}else if(hasil==5){
		printf("D+");
	}else if(hasil==4){
		printf("D");
	}else if(hasil==3){
		printf("D-");
	}else if(hasil==2){
		printf("E+");
	}else if(hasil==1){
		printf("E");
	}
	
	printf("\n");
	
	return 0;
}

/* Modul */

