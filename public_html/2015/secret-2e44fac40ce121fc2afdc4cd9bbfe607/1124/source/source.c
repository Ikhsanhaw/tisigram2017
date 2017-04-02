#include <stdio.h>
#include <math.h>
 
int main(){
	typedef struct{
		int x;
		int y;
	}Koordinat;
	int r;
	Koordinat pusat;
	Koordinat semut;
	
	scanf("%d %d", &pusat.x, &pusat.y);
	scanf("%d", &r);
	scanf("%d %d", &semut.x, &semut.y);
	int L1 = sqrt(pow(pusat.x-semut.x,2)+pow(pusat.y-semut.y,2));
	if(semut.x == pusat.x && semut.y == pusat.y){
		printf("tepat pada titik tengah arena pertandingan\n");
	}
	else{
		if (L1 == r){
			printf("tepat pada batas arena pertandingan\n");
		}
		else{
			if (L1 < r){
				printf("di dalam arena pertandingan\n");
			}
			else{
				printf("di luar arena pertandingan\n");
			}
		}
	}
	
	return 0;
}
