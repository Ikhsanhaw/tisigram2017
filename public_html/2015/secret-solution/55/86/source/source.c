#include <stdio.h>

int main()
{
	int jumlahbebek,Mati,Lahir,jmlLahir,jmlMati;
	
	scanf("%d",&jumlahbebek);
	scanf("%d",&Lahir);
	scanf("%d",&Mati);
	
	jmlLahir=jumlahbebek+Lahir;
	jmlMati = jumlahbebek-Mati;
	
	if(jumlahbebek>0 && jumlahbebek-Mati!=0)
	{

		printf("%d\n",jumlahbebek);
		printf("%d\n",jmlLahir);
		printf("%d\n",jmlMati);
	}
	
	else{
		printf("mustahil!");
	}
	
}
