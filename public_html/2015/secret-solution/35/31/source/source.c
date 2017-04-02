#include<stdio.h>


int main(){
	int posawal, jmlpos,i,j,run,rangespeed,curspeed;
	scanf("%d",&posawal);
	scanf("%d",&jmlpos);
	
	//buat array untuk menyimpan data musuh untuk nanti waktu tambahan
	float listPenghadang[jmlpos][3],waktu;
	for(i=0;i<jmlpos;i++){
		scanf("%f %f",&listPenghadang[i][0],&listPenghadang[i][1]);
	}
	
	//isi variabel run dengan nilai posisi awal
	//var run berfungsi untuk menyimpan data pertambahan jarak tiap detik
	run = posawal;
	waktu=0;
	j=0;
	rangespeed=run+10;
	//rangespeed adalah variabel untuk menyimpan data range dari batas kecepatan Sena
	curspeed=1;
	while(run<=90){
	
	//if untuk menghitung waktu tambahan
	//jika posisi musuh < rangespeed maka waktu tambahan bisa langsung dihitung
		if(listPenghadang[j][0]<rangespeed && j<jmlpos){
			listPenghadang[j][2] = (listPenghadang[j][1]*2)/curspeed;
			waktu=waktu+listPenghadang[j][2];
			j++;
		}
		if(run<rangespeed){
			run=run+curspeed;
		}else{
		
			curspeed++;
			rangespeed=rangespeed+(curspeed*10);
			run=run+curspeed;
			
		}		
		waktu=waktu+1;
	    
	}
	printf("%.2f\n",waktu);
	printf("%d\n",run-posawal);
	
	
	
	return 0;
}
