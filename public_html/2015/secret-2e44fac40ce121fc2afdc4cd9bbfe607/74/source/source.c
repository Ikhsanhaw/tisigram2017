/*
 * Program :*_dimas.c
 * Deskripsi :
 * Author : Dimas Aji Wardhana
 * Tanggal/versi :
 * Compiler : TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>
#include<math.h>
/*prototype*/
typedef struct{
	long x;
	long y;
}point;
/*program utama*/
int main(){
	point A,B;
	scanf("%d %d %d %d", &A.x, &A.y, &B.x, &B.y);
	printf("%d\n",abs(A.x-B.x)+abs(A.y-B.y));
	return 0;
	
	
}
/*fungsi dan prosedur*/

