#include <stdio.h>
#include <math.h>
int main(){
	int x,y,r,p,q;
	scanf("%d %d %d %d %d",&x,&y,&r,&p,&q);
	x=x-p;
	y=y-q;
	if(x<0){
		x=x*-1;
	}
	if(y<0){
		y=y*-1;
	}
	x=pow(x,2);y=pow(y,2);
	int hasil=x+y;
	r=pow(r,2);
	if(hasil>r){
		printf("di luar arena pertandingan\n");
	}else if(hasil==r){
		printf("tepat pada batas arena pertandingan\n");
	}else{
		if(hasil==0){
			printf("tepat pada titik tengah arena pertandingan\n");
		}else{
			printf("di dalam arena pertandingan");
		}
	}
	return 0;
}