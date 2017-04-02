
#include<stdio.h>

int main(){
	int pusatX,pusatY,r,x1,x2,y1,y2,posisiX,posisiY;
	scanf("%d %d",&pusatX,&pusatY);
	scanf("%d",&r);
	scanf("%d %d",&posisiX,&posisiY);
	
	x1=pusatX+r;
	x2=pusatX+(-r);
	y1=pusatY+r;
	y2=pusatY+(-r);
	printf("%d \n%d \n%d \n %d\n",x1,x2,y1,y2);
	if((posisiX==x1 || posisiX==x2) && (posisiY==y1 || posisiY==y2)){
		printf("tepat pada batas arena pertandingan\n");
	}
	if(posisiX==pusatX && posisiY==pusatY){
		printf("tepat pada titik tengah arena pertandingan\n");
	}
	if((posisiX<x1 && posisiX>x2) && (posisiY<y1 && posisiY>y2) && (posisiX!=pusatX && posisiY!=pusatY) ){
		printf("di dalam arena pertandingan\n");
	}
	
	if((posisiX>x1 || posisiX<x2) && (posisiY>y1 || posisiY<y2)){
		printf("di luar arena pertandingan\n");
	}
	
	return 0;
	
}
