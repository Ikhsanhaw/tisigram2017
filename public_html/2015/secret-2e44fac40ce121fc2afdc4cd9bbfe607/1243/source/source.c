/*
	Program  		: Pegunungan_imam
	Deskripsi		: Menggambar Pegunungan 
	Nama			: Muhamamd Imam Fauzan
	Tanggal/Versi	: 6 Desember 2014, 0.0
	Compiler		: MinGW GCC
	Waktu 			: 9 menit
*/

#include <stdio.h>
/*prototipe */
void pegunungan(int n);

int main ()
{
	int N ;
	scanf("%d",&N);
	pegunungan(N);

	return 0 ;
}

//prosedur menggambar pegunungan
void pegunungan(int n)
{
    int i ;
	if (n == 1)
		printf("*\n");
	else{
		pegunungan(n-1);
		for (i = 1 ; i <= n ; i++ ){
			printf("*");
        } printf("\n");
		pegunungan(n-1);
	}
}
