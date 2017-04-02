/*========================================================= 
Program : SimulasiTisigram4.c  								
Nama      : REKA ALAMSYAH									
Version	  : 1.0																			
Compiler  : TDM-GCC 4.9.2 64-bit Release					
============================================================ */

#include <stdio.h>
#include<math.h>

	typedef struct {
        int x;
        int y;
	} Point;
	
int main(){
	int r;
	float jarak_titik;
	Point titik_pusat,titik;
	
	scanf("%d %d", &titik_pusat.x, &titik_pusat.y);
	scanf("%d", &r);
	scanf("%d %d", &titik.x, &titik.y );
	
	jarak_titik=sqrt((abs(titik.x-titik_pusat.x)*abs(titik.x-titik_pusat.x))+(abs(titik.y-titik_pusat.y)*abs(titik.y-titik_pusat.y)));
	 	if(jarak_titik==r){
		printf("tepat pada batas arena pertandingan\n");
	}else if(jarak_titik>r){
		printf("di luar arena pertandingan\n");
	}else if(jarak_titik==0){
		printf("tepat pada titik tengah arena pertandingan\n");
	}else{
		printf("di dalam arena pertandingan\n");
	}
		
}

