#include <stdio.h>

typedef struct{
	int d;
	int m;
	int y;
}date;

int main(){
	date D;
	int batasakhir[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int x, y, z, KPK = 0, temp, tanggal;
	scanf("%d/%d/%d", &D.d, &D.m, &D.y);
	scanf("%d %d %d", &x, &y, &z);
	temp = x;
	while(KPK == 0){
		if(temp%x == 0 && temp %y == 0 && temp %z == 0){
			KPK = temp;
		}else{
			temp = temp + x;
		}
	}
	tanggal = D.d;
	D.d = D.d + KPK;
	if(D.d > batasakhir[D.m - 1]){
		D.d = KPK - (batasakhir[D.m - 1] - tanggal);
		D.m++;
		if(D.m > 12){
			D.y++;
			D.m = 1;
		}
	}
	
	printf("%d/%d/%d\n", D.d, D.m, D.y);
	return 0;
}
