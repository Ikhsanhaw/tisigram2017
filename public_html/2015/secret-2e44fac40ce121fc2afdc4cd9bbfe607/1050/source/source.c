#include<stdio.h>

int FPB(int bil1, int bil2);

int main(){
	typedef struct{
		int dd;
		int mm;
		int yyyy;
	}Date;
	int M,N,O;
	char slash[2];
	int hasilfpb2bil;
	int i,j,kpk,kpk0;
	int endofthemonth;
	
	Date tanggal;
	scanf("%d", &tanggal.dd);
	scanf("%c", &slash);
	scanf("%d", &tanggal.mm);
	scanf("%c", &slash);
	scanf("%d", &tanggal.yyyy);
	scanf("%d %d %d", &M, &N, &O);
	hasilfpb2bil = FPB(M,N);	
	kpk0 = (M*N)/hasilfpb2bil;
	hasilfpb2bil = (kpk0, O);
	kpk = (kpk0*O)/hasilfpb2bil;
	
	if (tanggal.mm < 8){
		if (tanggal.mm == 2){
			if (tanggal.yyyy % 4 == 0 && tanggal.yyyy % 100 != 0){
				endofthemonth = 29;
			}
			else{
				endofthemonth = 28;
			}
		}
		else{
			if (tanggal.mm % 2 != 0){
				endofthemonth = 31;
			}
			else{
				endofthemonth = 30;
			}
		}
	}
	else{
		if (tanggal.mm % 2 == 0){
			endofthemonth = 31;
		}
		else{
			endofthemonth = 30;
		}
	}
	if (tanggal.dd + kpk <= endofthemonth){
		tanggal.dd = tanggal.dd + kpk;
	}
	else{
		tanggal.dd = (tanggal.dd + kpk)-endofthemonth;
		
		if(tanggal.mm == 12){
			tanggal.yyyy++;
			tanggal.mm = 1;
		}
		else{
			tanggal.mm = tanggal.mm+1;
		}
		
	}
	
	printf("%d/%d/%d\n", tanggal.dd, tanggal.mm, tanggal.yyyy);
	return 0;
}

int FPB(int bil, int bil1){
	int temp;
	int x,y;
	x = bil;
	y = bil1;
	while(y != 0){
		temp = x%y;
		x = y;
		y = temp;
	}
	
	return x;
}
