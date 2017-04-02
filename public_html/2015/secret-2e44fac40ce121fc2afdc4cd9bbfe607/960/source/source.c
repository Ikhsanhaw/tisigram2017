#include <stdio.h>
#include <string.h>

int kpk(int a, int b, int c){
	int d = a;
	if(b<d){
		d = b;
	}
	if(c<d){
		d = c;
	}	
	int kpk = d;
	while(1){
		if(kpk%a==0 && kpk%b==0 && kpk%c==0){
			break;
		}
		kpk++;
	}
	return kpk;
}

int tglakhir(int bulan, int tahun){
	int tgl;
	switch(bulan){
		case 1 :
			tgl = 31;
			break;
		case 2 :
			if((tahun%4==0 && (tahun%100!=0)) || (tahun%400==0)){
				tgl = 29;
			}else{
				tgl = 28;
			}
			break;
		case 3 :
			tgl = 31;
			break;
		case 4 :
			tgl = 30;
			break;
		case 5 :
			tgl = 31;
			break;
		case 6 :
			tgl = 30;
			break;
		case 7 :
			tgl = 31;
			break;
		case 8 :
			tgl = 31;
			break;
		case 9 :
			tgl = 30;
			break;
		case 10 :
			tgl = 31;
			break;
		case 11 :
			tgl = 30;
			break;
		case 12 :
			tgl = 31;
			break;
	}
	return tgl;
}
	
int main(){
	int meeting[3];
	int hari,bulan,tahun;
	scanf("%d/%d/%d",&hari,&bulan,&tahun);
	int i;
	for(i=0;i<3;i++){
		scanf("%d",&meeting[i]);
	}
	hari+=kpk(meeting[0],meeting[1],meeting[2]);
		while(hari>tglakhir(bulan,tahun)){
		hari -= tglakhir(bulan,tahun);
		bulan++;
		}
	printf("%d/%d/%d\n",hari,bulan,tahun);
return 0;
}


