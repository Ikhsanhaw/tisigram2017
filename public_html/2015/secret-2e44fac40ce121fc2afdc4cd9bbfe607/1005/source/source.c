
#include<stdio.h>
#include<stdbool.h>

typedef struct{
	int tgl;
	int bln;
	int thn;
} Date ;

bool IsKabisat(Date D)
{
	return (D.thn % 400 == 0);
}

int TglAkhir(Date D)
{
	switch (D.bln)
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
		
		if (IsKabisat(D)){
			return 29;
		} else {
			return 28;
		} break;
	}
}

bool IsValid(Date D)
{
	return (((D.tgl <= TglAkhir(D)) && (D.tgl > 0)) && ((D.bln <= 12) && (D.bln > 0)));
}

void NextDate(Date *D, int i)
{
	(*D).tgl += i;
	if(!IsValid((*D))){
		(*D).tgl = i - TglAkhir((*D));
		(*D).bln += 1;
		if (!IsValid((*D))){
			(*D).bln = 1;
			(*D).thn += 1;
		}
	}
}

int KPK (int A, int B, int C)
{
	int i, max, FPB;
	
	if(A>B){
		max=A;
	} else {
		max=B;
	}
	
	for(i=A*B ; i>=1 ; i--){
		if(i % A == 0 && i % B == 0 && i % C == 0){
			FPB = i;
		}
	}
	
	return FPB;
}

int main()
{
	Date A; int M, N, O, hasil;
	scanf("%d/%d/%d", &A.tgl, &A.bln, &A.thn);
	scanf("%d\n%d\n%d", &M, &N, &O);
	hasil = KPK(M,N,O);
	NextDate(&A, hasil);
	printf("%d/%d/%d\n", A.tgl, A.bln, A.thn);
	
	return 0;
}
