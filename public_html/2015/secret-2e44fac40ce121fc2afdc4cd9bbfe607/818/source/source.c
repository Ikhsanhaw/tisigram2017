/*
	Program 		: _Ferdhika.c
	Deskripsi 		: 
	Author 			: Ferdhika Yudira (151524010)
	Tanggal/Version : -/01/2016 v.1.0
	Compiler 		: Dev C++ V5.7.1
	Ctt Lain 		: 
*/
#include<stdio.h>
#include<math.h>

typedef struct {
        int x;
        int y;
} Point;

/* Prototype */

int main(){
	/* Deklarasi */
	int r;
	float jarak;
	Point l,p;
	
	/* Algoritma */
	scanf("%d %d",&l.x,&l.y);
	scanf("%d",&r);
	scanf("%d %d",&p.x,&p.y);
	
	jarak = sqrt((abs(p.x-l.x)*abs(p.x-l.x))+(abs(p.y-l.y)*abs(p.y-l.y)));
	
	if(jarak==r){
		printf("tepat pada batas arena pertandingan\n");
	}else if(jarak>r){
		printf("di luar arena pertandingan\n");
	}else if(jarak==0){
		printf("tepat pada titik tengah arena pertandingan\n");
	}else{
		printf("di dalam arena pertandingan\n");
	}
	
	return 0;
}

/* Modul */

