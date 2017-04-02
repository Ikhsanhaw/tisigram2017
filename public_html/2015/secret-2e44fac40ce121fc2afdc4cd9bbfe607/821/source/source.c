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
	int L = pow(pusat.x,2)+pow(pusat.y,2);
	int L1 = pow(semut.x,2)+pow(semut.y,2);
	printf("%d\n", L);
	printf("%d\n", L1);



			if (L1 == L){
				printf("tepat pada batas arena pertandingan\n");
			}
			else{
				if (L1 < L){
					printf("di dalam arena pertandingan\n");
				}
				else{
					printf("di luar arena pertandingan\n");
				}
			}
		}
	}
	
	

	
	return 0;
}
