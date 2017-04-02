#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
	int d,m,y;
} Tanggal;

int kpk(int x, int y, int z){
	int result;
	for (result = z;(result % x != 0) || (result % y != 0) ;result = result + z){}
	return result;
}

void addDay(Tanggal *L,int D){
	(*L).d += D;
	int temp;
	do {
		temp = getDay(*L);
		if ((*L).d > temp){
			(*L).m++;
			(*L).d -= temp;
		}
		if ((*L).m > 12){
			(*L).m = 1;
			(*L).y++;
		}
	} while ((*L).d > temp);
}

int getDay(Tanggal L){
	if (L.m == 2){
		if (L.y % 400 ==0 || ((L.y % 100 != 0) && (L.y % 4 == 0 )))
			return 29;
		else 
			return 28;
	}
	else {
		if (L.m <= 7){
			if (L.m % 2 == 0) return 30;
			else return 31;
		}
		else{
			if (L.m % 2 != 0) return 30;
			else return 31;
		}
	}
}

int main(){
	Tanggal L;
	int M,N,O;
	scanf("%2d/%2d/%d",&L.d,&L.m,&L.y);
	scanf("%d\n%d\n%d",&M,&N,&O);
	int dResult = kpk(M,N,O);
	addDay(&L,dResult);
	printf("%d/%d/%d\n",L.d,L.m,L.y);
	return 0;
}



