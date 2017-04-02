/*
Program 	 	 : _Fathin.c
Deskripsi 	 	 :
Author           : Muhammad Ridwan Fathin
Compiler         : Dev-C++ 5.7.1
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include <stdio.h>
#include <math.h>
int main (){
	typedef struct {
		int x;
		int y;	
	} Point;
	Point pusat,titik;
	int r;
	float panjang;
	scanf("%d %d",&pusat.x,&pusat.y);
	scanf("%d",&r);
	scanf("%d %d",&titik.x,&titik.y);
	panjang=sqrt(abs(titik.x-pusat.x)*abs(titik.x-pusat.x)+abs(titik.y-pusat.y)*abs(titik.y-pusat.y));
	if (panjang==0){
		printf("tepat pada titik tengah arena pertandingan\n");
	}else if(panjang==r){
		printf("tepat pada batas arena pertandingan\n");
	}else if(panjang<r){
		printf("di dalam arena pertandingan\n");
	}else{
		printf("di luar arena pertandingan\n");
	}
	return 0;
}

