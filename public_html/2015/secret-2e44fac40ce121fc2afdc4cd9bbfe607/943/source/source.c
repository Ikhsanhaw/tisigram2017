#include <stdio.h>

int main(){
	int lx,ly,lr,px,py;
	
	scanf("%d %d", &lx,&ly);
	scanf("%d", &lr);
	scanf("%d %d", &px,&py);

	

		if(px==(lr+lx) || py==(lr+ly)){
			printf("tepat pada batas arena pertandingan\n");
		}
		else if((px<=(lr+lx) && (px>=(lx-lr))) || (py<=(lr+ly) && (py>=(lx-ly)))){
			printf("di dalam arena pertandingan\n");
			
		}else if(px>=(lr+lx)  || (py<=(lr-ly) )){
			printf("di luar arena pertandingan\n");

		}else if(px==lx || py==ly){
			printf("tepat pada titik tengah arena pertandingan\n");
		}
}
