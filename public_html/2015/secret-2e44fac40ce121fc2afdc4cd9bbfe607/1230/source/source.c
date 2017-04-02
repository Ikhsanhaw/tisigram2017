#include <stdio.h>

int main(){
	int lx,ly,r,px,py;
	
	scanf("%d %d", &lx, &ly);
	scanf("%d", &r);
	scanf("%d %d", &px, &py);
	
	if(px == lx && py == ly){
		printf("tepat pada titik tengah arena pertandingan\n");
	}else if(px > (lx+r) || px < -(lx+r) || py > (ly+r) || py < -(ly+r)){
		printf("di luar arena pertandingan\n");
	}else if(px == (lx+r) || px == -(lx+r) || py == (ly+r) || py == -(ly+r)){
		printf("tepat pada batas arena pertandingan\n");
	} else if(px < (lx+r) && px > -(lx+r) && py < (ly+r) && py > -(ly+r)){
		printf("di dalam arena pertandingan\n");
	}
	
	return 0;
}
