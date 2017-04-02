#include <stdio.h>

int main(){
	int r;
	typedef struct{
		int x;
		int y;
	}Titik;
	Titik L;
	Titik P;

	scanf("%d %d", &L.x, &L.y);
	scanf("%d", &r);
	scanf("%d %d", &P.x, &P.y);
	
	if(L.x == P.x && L.y == P.y){
		printf("tepat pada titik tengah arena pertandingan\n");
	}else{
		if((P.x == L.x+r && P.y == L.y) || (P.x == L.x && P.y == L.y+r) || (P.x == L.x-r && P.y == L.y) || (P.x == L.x && P.y == L.y-r)){
			printf("tepat pada batas arena pertandingan\n");
		}else{
			if((P.x < L.x+r && P.x>L.x-r) && (P.y < L.y+r && P.y > L.y-r)){
				printf("di dalam arena pertandingan\n");
			}else{
				printf("di luar arena pertandingan\n");
			}
		}
	}
	return 0;
}
	
