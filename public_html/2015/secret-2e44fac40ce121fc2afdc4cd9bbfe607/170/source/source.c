/*
 * Program :*_dimas.c
 * Deskripsi :
 * Author : Dimas Aji Wardhana
 * Tanggal/versi :
 * Compiler : TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>

/*prototype*/
char alfabet(int A);
/*program utama*/
int main(){
	int A,B;
	scanf("%d %d",&A,&B);
	for(int i = B; i>B-A;i-- ){
		if(i!=B-A+1){
			printf("%c",alfabet(i));
		}
		else{
			printf("%c\n",alfabet(i));
		}
	}
	return 0;
}
/*fungsi dan prosedur*/
char alfabet(int A){
	switch(A){
		case 1: {return 'A'; break;}
		case 2: {return 'B'; break;}
		case 3: {return 'C'; break;}
		case 4: {return 'D'; break;}
		case 5: {return 'E'; break;}
		case 6: {return 'F'; break;}
		case 7: {return 'G'; break;}
		case 8: {return 'H'; break;}
		case 9: {return 'I'; break;}
		case 10: {return 'J'; break;}
		case 11: {return 'K'; break;}
		case 12: {return 'L'; break;}
		case 13: {return 'M'; break;}
		case 14: {return 'N'; break;}
		case 15: {return 'O'; break;}
		case 16: {return 'P'; break;}
		case 17: {return 'Q'; break;}
		case 18: {return 'R'; break;}
		case 19: {return 'S'; break;}
		case 20: {return 'T'; break;}
		case 21: {return 'U'; break;}
		case 22: {return 'V'; break;}
		case 23: {return 'W'; break;}
		case 24: {return 'X'; break;}
		case 25: {return 'Y'; break;}
		case 26: {return 'Z'; break;}
	}
}
