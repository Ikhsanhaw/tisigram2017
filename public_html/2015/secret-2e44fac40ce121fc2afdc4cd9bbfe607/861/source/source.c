#include<stdio.h>

typedef struct{
	int x;
	int y;
}point;
int main(){
	point L;// koordinat lingkaran
	int r;// jari - jari
	point S;// posisi semut
	scanf("%d %d",&L.x,&L.y);
	scanf("%d",&r);
	scanf("%d %d",&S.x,&S.y);
	if(S.x==L.x&&S.y==L.y){printf("tepat pada titik tengah arena pertandingan\n")}
	else if(S.x<L.x+r&& S.y<L.y+r&&S.x>L.x-r&&S.y>L.y-r){
		printf("di dalam area pertandingan\n");
	} 
	else if((S.x==L.x+r&& S.y==L.y)||(S.x==L.x-r&&S.y==L.y)||(S.x==L.x&&S.y==L.y-r)||(S.x==L.x&&S.y==L.y+r)){
	printf("tepat pada batas arena pertandingan\n")}
	else{printf("di luar arena pertandingan\n")}
return 0;
}