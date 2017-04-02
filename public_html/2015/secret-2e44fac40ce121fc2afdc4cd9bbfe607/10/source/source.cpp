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
	char A[11];
	int i=0;
	scanf("%s",&A);
	
	do{
		i++;
	}
	while(A[i]!='\0');
	i=i-1;
	for(i;i>=0;i--){
		if(i!=0){
			printf("%c",A[i]);
		}
		else{
			printf("%c\n",A[i]);
		}
	}
	return 0;
}
/*fungsi dan prosedur*/

