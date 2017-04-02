/* Program 	: -
Deskripsi 	: -
Nama 		: freenando r/151524011
Tanggal 	: -
Compiler 	: dev-c++ 5.7.1
============================================================ */
#include <stdio.h>
int main(){
	typedef struct{
		int x,y;
		
	}point;
	int r;
	point a,b,c,d;
	scanf("%d %d\n %d\n %d %d",&a.x,&b.y,&r,&c.x,&d.y);
	if((c.x==a.x)&&(d.y==b.y)){
		printf("tepat pada titik tengah arena pertandingan");
	}
	else{
		if(((c.x==a.x+r)&&(d.y==b.y))||((c.x==a.x-r)&&(d.y==b.y))||((c.x==a.x)&&(d.y==b.y+r))||((c.x==a.x)&&(d.y==b.y-r))){
		printf("tepat pada batas arena petandingan");
			}
		else {
			if(((c.x>a.x+r)&&((d.y<=b.y)||(d.y>=b.y)))||((c.x<a.x-r)&&((d.y<=b.y)||(d.y>=b.y)))||((d.y>b.y+r)&&((c.x<=a.x)||(c.x>=a.x)))||((d.y<b.y-r)&&((c.x<=a.x)||(c.x>=a.x)))){
			printf("di luar arena pertandingan");
			}
			else {
			printf("di dalam arena pertandingan");
			}	
		}
	}		
	printf("\n");
	return 0;}
