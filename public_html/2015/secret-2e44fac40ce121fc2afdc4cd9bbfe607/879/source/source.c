#include <stdio.h>
#include <math.h>

int main(){
	
	int x1,y1,x2,y2,r;
	float p;
	
	scanf("%d %d",&x1,&y1);
	scanf("%d",&r);
	scanf("%d %d",&x2,&y2);
	
	p = sqrt(abs(x2-x1) * abs(x2-x2) + abs(y2-y1) * abs(y2-y2));
	if(p==0){
		printf("tepat pada titik tengah arena pertandingan");
	}else 
	if(p==r){
		printf("tepat pada batas arena pertandingan");
	}else 
	if (p<r){
		printf("di dalam arena pertandingan");
	}else{
		printf("di luar arena pertandingan\n");
	}
	printf("\n");	
return 0;
}

