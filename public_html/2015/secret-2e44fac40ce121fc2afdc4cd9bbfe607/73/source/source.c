/*
 * Program :*_dimas.c
 * Deskripsi :
 * Author : Dimas Aji Wardhana
 * Tanggal/versi :
 * Compiler : TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>

/*prototype*/
/*program utama*/
int main(){
	int A;
	scanf("%d",&A);
	if(A%7==0){printf("Rabu\n");	}
	if(A%7==1){printf("Kamis\n");	}
	if(A%7==2){printf("Jumat\n");	}
	if(A%7==3){printf("Sabtu\n");	}
	if(A%7==4){printf("Minggu\n");	}
	if(A%7==5){printf("Senin\n");	}
	if(A%7==6){printf("Selasa\n");	}
	return 0;
}
/*fungsi dan prosedur*/

