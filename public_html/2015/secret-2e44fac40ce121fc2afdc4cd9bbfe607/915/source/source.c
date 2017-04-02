/*
Program 	 	: KPK3var_Fathin.c
Deskripsi 	 	: Menghitung kpk dari tiga bilangan
Compiler        : Dev-C++ 5.11
Tanggal/Version : 14122015/ v1.0
*/

#include <stdio.h>
int fpb(int a, int b);

typedef struct {int Tgl; 
                int Bln; 
                int Thn;
               } DATE;
int main(){
	long a,b,c,kpk;
	char k,l;
	DATE D;
	scanf("%d%c%d%c%d",&D.Tgl,&k,&D.Bln,&l,&D.Thn);
	scanf("%d %d %d",&a,&b,&c);
	kpk=a*b/fpb(a,b);
	kpk=kpk*c/fpb(kpk,c);
	D.Tgl+=kpk;
	while(D.Tgl>TglAkhir(D)){
		D.Tgl-=TglAkhir(D);
		D.Bln+=1;
	}
	printf("%d/%d/%d\n",D.Tgl,D.Bln,D.Thn);
return 0;
}
int fpb(int a, int b){
	if (b==0){
			return a;
	}else{
		fpb(b,a % b);
	}
}

int TglAkhir (DATE D){
	/* Memberikan tanggal terakhir dari sebuah bulan */
	switch (D.Bln)
	{
		case 1 : return 31; break;
		case 3 : return 31; break;
		case 5 : return 31; break;
		case 7 : return 31; break;
		case 8 : return 31; break;
		case 10 : return 31; break;
		case 12 : return 31; break;
		case 4 : return 30; break;
		case 6 : return 30; break;
		case 9 : return 30; break;
		case 11 : return 30; break;
		case 2	: 
		
		if (D.Thn%400==0){
			return 29;
		} else if (D.Thn%4==0 && D.Thn% 100!=0){
			return 29;
		}else{
			return 28;
		} break;
	}
}
