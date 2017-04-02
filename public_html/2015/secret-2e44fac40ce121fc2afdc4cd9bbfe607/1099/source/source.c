#include <stdio.h>
#include <math.h>

typedef struct{
	int x;
	int y;
}Point;

int main(){
	Point C, P;
	float r, r1;
	scanf("%d %d %f %d %d", &C.x, &C.y, &r, &P.x, &P.y);
	if(P.x == C.x && P.y == C.y){
		printf("tepat pada titik tengah arena pertandingan\n");
	}else{
		P.x = P.x - C.x;
		P.y = P.y - C.y;
		r1 = sqrt(P.x*P.x + P.y*P.y);
		if(r == r1){
			printf("tepat pada batas arena pertandingan\n");
		}else{
			if(r > r1){
				printf("di dalam arena pertandingan\n");
			}else{
				printf("di luar arena pertandingan\n");
			}
		}
	}
	
	return 0;
}
