/* Program              : vokal.c
   Deskripi             :
   Nama/NIM             : Sukma Setyaji/151524030
   Compiler             : TDM-GCC 4.9.2
   Tanggal/Version      : dd/mm/yyyy v 1.0
   Catatan Lain         : -
==============================================================================*/
#include <stdio.h>

int main(){
	char karakter;
	scanf("%c", &karakter);
	if (karakter == 'a'||karakter == 'A')
	{
		/* code */
		printf("True\n");
	}else if (karakter =='i' || karakter=='I')
	{
		/* code */
		printf("True\n");
	}else if (karakter == 'u'||karakter == 'U')
	{
		/* code */
		printf("True\n");
	}else if (karakter == 'e'||karakter == 'E')
	{
		/* code */
		printf("True\n");
	}else if (karakter == 'o'||karakter == 'O')
	{
		/* code */
		printf("True\n");
	}else{
		printf("False\n");
	}

	return 0;
}
